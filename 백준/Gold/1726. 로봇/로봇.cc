#include <iostream>
#include <queue>
using namespace std;

int m, n;
int map[105][105];
int dx[4] = {0,1,0,-1}; // 동 남 서 북 (시계방향)
int dy[4] = {1,0,-1,0}; // 동 남 서 북
int mapping[4] = { 0,2,1,3 }; // 매핑용 배열
int start_x, start_y, start_dir; // 로봇 초기 시점
int end_x, end_y, end_dir; // 종료 시점
bool visited[105][105][4]; // x, y, 방향.

struct robot_data // 로봇 관련 정보
{
	int x;
	int y;
	int dir;
	int move;
};

bool safe(int x, int y) // 충돌 판정 처리
{
	if (x < 1 || x > m)
	{
		return false;
	}
	if (y < 1 || y > n)
	{
		return false;
	}
	return true;
}

void bfs()
{
	queue<robot_data> que;
	que.push({start_x,start_y,start_dir,0});
	visited[start_x][start_y][start_dir] = true;

	while (!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		int dir = que.front().dir;
		int move = que.front().move;

		que.pop();

		// ans
		if (x == end_x && y == end_y && dir == end_dir)
		{
			cout << move;
			return ;
		}

		// Go k
		for (int i = 1; i <= 3; i++)
		{
			int new_x = x + (dx[dir] * i); 
			int new_y = y + (dy[dir] * i);

			if (safe(new_x, new_y) == true && visited[new_x][new_y][dir] == false)
			{
				if (map[new_x][new_y] == 1) // 벽 판정(벽 넘어가기 금지.)
				{
					break;
				}
				visited[new_x][new_y][dir] == true;
				que.push({new_x , new_y, dir, move+1});
			}
		}

		// turn left, right
		if (visited[x][y][(dir + 1) % 4] == false)
		{
			visited[x][y][(dir + 1) % 4] = true;
			que.push({ x,y,(dir + 1) % 4, move + 1 });
		}
		if (visited[x][y][(dir + 3) % 4] == false)
		{
			visited[x][y][(dir + 3) % 4] = true;
			que.push({ x,y,(dir + 3) % 4, move + 1 });
		}
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}
	cin >> start_x >> start_y >> start_dir;
	cin >> end_x >> end_y >> end_dir;

	start_dir = mapping[start_dir - 1];
	end_dir = mapping[end_dir - 1];

	bfs();
}