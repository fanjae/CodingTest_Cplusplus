#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;
int n, m, k;
int maze[1005][1005];
int visited[11][1005][1005];
int dx[4] = { -1,1,0,0 }; // 상,하,좌,우
int dy[4] = { 0,0,-1,1 }; // 상,하,좌,우
int ans = 1005 * 1005;
struct my_pair
{
	int x;
	int y;
	int move_count;  // 이동 횟수
	int destory_wall_count; // 벽 부순 횟수
	bool day; // 낮
};

queue <my_pair> que;

void bfs()
{
	while (!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		int move_count = que.front().move_count;
		int destory_wall_count = que.front().destory_wall_count;
		bool day = que.front().day;
		que.pop();

		if (x == n && y == m)
		{
			if (ans > move_count)
			{
				ans = move_count;
			}
			continue;
		}

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > m) // 범위 초과한 경우 통과
			{
				continue;
			}
			if (maze[new_x][new_y] == 0) // 그냥 이동할 수 있는 공간인 경우.
			{
				if (visited[destory_wall_count][new_x][new_y] == -1 || visited[destory_wall_count][new_x][new_y] > move_count + 1) // 첫 방문이거나, 현재까지 방문 중 최단 경로인 경우.
				{
					visited[destory_wall_count][new_x][new_y] = move_count + 1;
					que.push({ new_x,new_y,move_count + 1,destory_wall_count, !day });
				}
			}
			if (destory_wall_count < k && maze[new_x][new_y] == 1) // 벽 부순횟수가 K개 미만인데 벽 만난 경우
			{
				if (day) // 낮이면, 벽 부수기 가능
				{
					if (visited[destory_wall_count+1][new_x][new_y] == -1 || visited[destory_wall_count+1][new_x][new_y] > move_count + 1) // 첫 방문이거나, 현재까지 방문 중 최단 경로인 경우.
					{
						visited[destory_wall_count+1][new_x][new_y] = move_count + 1;
						que.push({ new_x,new_y,move_count + 1,destory_wall_count + 1, !day });
					}
				}
				else // 밤이면, 벽을 부수기 위해 대기.
				{
					if (visited[destory_wall_count+1][new_x][new_y] == -1 || visited[destory_wall_count+1][new_x][new_y] > move_count + 2) // 첫 방문이거나, 현재까지 방문 중 최단 경로인 경우.
					{
						visited[destory_wall_count+1][new_x][new_y] = move_count + 2;
						que.push({ new_x,new_y,move_count + 2,destory_wall_count + 1, day});
					}
				}
			}
		}
	}
}

int main(void)
{
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%1d", &maze[i][j]);
		}
	}
	memset(visited, -1, sizeof(visited));


	visited[0][1][1] = 1;
	que.push({ 1,1,1,0,true });
	bfs();
	
	if (ans == 1005 * 1005)
	{
		ans = -1;
	}
	cout << ans;
}