#include <iostream>
#include <queue>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int n, m;
int map_value[105][105];
bool visited[105][105][10005];
int min_wall_ans = 10005;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

struct my_struct
{
	int x;
	int y;
	int wall_count;
};
queue <my_struct> que;

bool safe(int x, int y)
{
	if (x <= 0 || x > m || y <= 0 || y > n) return false;
	else return true;
}

void bfs()
{
	while (!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		int wall_count = que.front().wall_count;
		que.pop();

		if (x == m && y == n)
		{
			if (min_wall_ans > wall_count) min_wall_ans = wall_count;
			continue;
		}

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (safe(new_x, new_y))
			{
				if (map_value[new_x][new_y] == 0 && min_wall_ans > wall_count && visited[new_x][new_y][wall_count] == false)
				{
					visited[new_x][new_y][wall_count] = true;
					que.push({ new_x,new_y, wall_count });
				}
				if (map_value[new_x][new_y] == 1 && min_wall_ans > wall_count + 1 && visited[new_x][new_y][wall_count+1] == false)
				{
					visited[new_x][new_y][wall_count+1] = true;
					que.push({ new_x,new_y, wall_count + 1 });
				}
			}
		}
	}
}
int main(void)
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%1d", &map_value[i][j]);
		}
	}

	que.push({ 1,1,0 });
	bfs();

	cout << min_wall_ans;
}