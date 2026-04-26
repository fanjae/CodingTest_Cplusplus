#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n;
int map_data[105][105];
bool visited_map[105][105] = { 0 };
queue <pair<pair<int, int>, int>> que;

int dx[4] = { -1, 1, 0 ,0 }; // 상 하 좌 우
int dy[4] = { 0, 0, -1, 1 }; // 상 하 좌 우
int cnt = 1;
int ans = 10005; // 지도의 크기가 N*N 임을 감안하면, 다리 길이는 최소 N*N보다 작을 것임.
void first_bfs(int i, int j, int cnt)
{
	que.push(make_pair(make_pair(i, j), cnt));

	while (!que.empty()) // 큐가 빌때까지 탐색 계속.
	{
		int x = que.front().first.first;
		int y = que.front().first.second;
		visited_map[x][y] = true;

		map_data[x][y] = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > n) // 좌표 넘어가는 경우
			{
				continue;
			}
			if (visited_map[new_x][new_y] == false && map_data[new_x][new_y] != 0)
			{
				visited_map[new_x][new_y] = true;
				que.push(make_pair(make_pair(new_x, new_y),cnt));
			}
		}
	}
}
void second_bfs(int i, int j, int current)
{
	bool visited[105][105] = { 0 };
	que.push(make_pair(make_pair(i, j), 0));

	while (!que.empty())
	{
		int x = que.front().first.first;
		int y = que.front().first.second;
		int dist = que.front().second; // 거리 체크
		visited[x][y] = true;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			int new_dist = dist + 1;

			if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > n) // 좌표 넘어가는 경우
			{
				continue;
			}
			if (ans <= new_dist - 1) // 최소 길이를 넘어가는 거리가 나온 경우 가망 없음.
			{
				continue;
			}
			if (map_data[new_x][new_y] != current && visited[new_x][new_y] == false)
			{
				if (map_data[new_x][new_y] != 0 && map_data[new_x][new_y] > current) // 탐색 도중 도달하는 영역이 새로운 육지인 경우
				{
					if (ans > new_dist-1) // 짧은 다리 길이 계산.
					{
						ans = new_dist-1;
					}
				}
				else if (map_data[new_x][new_y] == 0)
				{
					visited[new_x][new_y] = true;
					que.push(make_pair(make_pair(new_x, new_y), new_dist));
				}
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	int x, y;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{	
			cin >> map_data[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (map_data[i][j] == 1 && visited_map[i][j] == false)
			{
				first_bfs(i,j,cnt);
				cnt++;
			}
		}
	}

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << map_data[i][j] << " ";
		}
		cout << "\n";
	}*/

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (map_data[i][j] != 0)
			{
				second_bfs(i, j, map_data[i][j]); // 현재 영역 값을 보내줌.
			}
		}
	}

	cout << ans;

}