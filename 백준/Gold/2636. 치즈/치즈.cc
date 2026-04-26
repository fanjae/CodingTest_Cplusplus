#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m;
int cnt = 10005, last_cnt, time_cnt;
int map[105][105];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

bool visited[105][105];

queue < pair<int, int>> que;
int cheese_count()
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cnt = cnt + map[i][j];
		}
	}
	return cnt;
}
void melting_cheese(int j, int k)
{
	while (cnt != 0)
	{
		cnt = cheese_count(); // 치즈 개수를 센다.
		if (cnt == 0)
		{
			break;
		}
		else
		{
			last_cnt = cnt; // 직전 치즈 개수 계산.
			time_cnt++; // 1시간이 지남.

			que.push(make_pair(j, k));
			visited[j][k] = true;
			while (!que.empty())
			{
				int x = que.front().first;
				int y = que.front().second;
				que.pop();
				for (int i = 0; i < 4; i++)
				{
					int new_x = x + dx[i];
					int new_y = y + dy[i];
					if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > m) // 좌표가 넘어간 경우
					{
						continue;
					}
					if (visited[new_x][new_y] == false) // 방문 안한 경우
					{
						if (map[new_x][new_y] == 1) // 치즈가 존재함. (큐에는 넣지 않음.)
						{
							visited[new_x][new_y] = true; // 방문 체크
							map[new_x][new_y] = 0;
						}
						else // 공기가 들어갈 수 있는 경우
						{
							visited[new_x][new_y] = true;
							que.push(make_pair(new_x, new_y));
						}
					}
				}
			}
			memset(visited, 0, sizeof(visited)); // 방문 여부 리셋.
		}
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}
	melting_cheese(1,1);
	cout << time_cnt << "\n";
	cout << last_cnt << "\n";
}