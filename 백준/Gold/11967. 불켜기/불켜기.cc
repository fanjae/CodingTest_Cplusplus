#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int ans = 0;
int n;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
bool light[105][105];
bool visited[105][105];
bool room_move[105][105];
struct my_pair
{
	int x;
	int y;
};
vector <my_pair> vec[105][105];
queue <my_pair> que;
void bfs()
{
	que.push({ 1, 1 });
	visited[1][1] = true;
	room_move[1][1] = true;
	light[1][1] = true;

	while (!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		que.pop();

		int vec_size = vec[x][y].size();
		for (int i = 0; i < vec_size; i++)
		{
			int light_x = vec[x][y].at(i).x;
			int light_y = vec[x][y].at(i).y;
			light[light_x][light_y] = true; // 방문한 곳에서 킬 수 있는 곳은 다 불킴.
		}
		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > n) // 영역 벗어나면 다음 스킵.
			{
				continue;
			}
			else
			{
				room_move[new_x][new_y] = true; // 일단, 걸어서 갈 수 있는 곳인가.. (불이 늦게 켜지면 뒤늦게 방문을 해야할 수도 있음.)
			}
		}
		for (int i = 1; i <= n; i++) // n*n에 대해서 모든 방 체크.
		{
			for (int j = 1; j <= n; j++)
			{
				if (visited[i][j] == false && room_move[i][j] == true && light[i][j] == true) // 불 켜져있는데 방문 못한 곳 있으면 가야함.
				{
					visited[i][j] = true;
					que.push({ i,j });
				}
			}
		}

	}
}
int main(void)
{
	int m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		vec[x][y].push_back({ a,b });
	}
	bfs();

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (light[i][j])
			{
				ans++;
			}
		}
	}
	cout << ans;
}