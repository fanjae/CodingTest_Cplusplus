#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, m;
int blue[2];
int red[2];
int hole[2];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
string map[15];
bool visited[15][15][15][15];

struct bluenred
{
	int red_x;
	int red_y;
	int blue_x;
	int blue_y;
	int cnt;
};
bool safe(int x, int y)
{
	if (x < 0 || y < 0 || x >= n || y >= m)
	{
		return false;
	}
	else if (map[x][y] == '#')
	{
		return false;
	}
	else
	{
		return true;
	}
}

int bfs()
{
	queue<bluenred> que;

	que.push({red[0], red[1], blue[0], blue[1],0});
	visited[red[0]][red[1]][blue[0]][blue[1]] = true;

	int answer = 0;

	while (!que.empty())
	{
		int red_x = que.front().red_x;
		int red_y = que.front().red_y;

		int blue_x = que.front().blue_x;
		int blue_y = que.front().blue_y;

		int cnt = que.front().cnt;

		que.pop();

		if (cnt >= 10) continue;

		for (int i = 0; i < 4; i++)
		{
			int new_red_x = red_x;
			int new_red_y = red_y;

			int new_blue_x = blue_x;
			int new_blue_y = blue_y;

			bool red_finish = false;
			bool blue_finish = false;

			while (safe(new_red_x + dx[i], new_red_y + dy[i]) == true)
			{
				new_red_x = new_red_x + dx[i];
				new_red_y = new_red_y + dy[i];
				if (new_red_x == hole[0] && new_red_y == hole[1])
				{
					red_finish = true;
					break;
				}
				
			}
			while (safe(new_blue_x + dx[i] , new_blue_y + dy[i]) == true)
			{
				new_blue_x = new_blue_x + dx[i];
				new_blue_y = new_blue_y + dy[i];
				if (new_blue_x == hole[0] && new_blue_y == hole[1])
				{
					blue_finish = true;
					break;
				}
			}

			if (new_red_x == new_blue_x && new_red_y == new_blue_y)
			{
				if (abs(new_red_x - red_x) + abs(new_red_y - red_y) > abs(new_blue_x - blue_x) + abs(new_blue_y - blue_y))
				{
					new_red_x = new_red_x - dx[i];
					new_red_y = new_red_y - dy[i];
				}
				else
				{
					new_blue_x = new_blue_x - dx[i];
					new_blue_y = new_blue_y - dy[i];
				}
			}

			if (red_finish == true && blue_finish == false)
			{
				cnt++;
				answer = cnt;
				return answer;
			}
			else if (blue_finish == true)
			{
				continue;
			}

			if (visited[new_red_x][new_red_y][new_blue_x][new_blue_y] == false)
			{
				visited[new_red_x][new_red_y][new_blue_x][new_blue_y] = true;
				que.push({ new_red_x,new_red_y,new_blue_x,new_blue_y,cnt + 1 });
			}
		}
	}
	return -1;
}


int main(void)
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 'B')
			{
				blue[0] = i;
				blue[1] = j;
			}
			else if (map[i][j] == 'R')
			{
				red[0] = i;
				red[1] = j;
			}
			else if (map[i][j] == 'O')
			{
				hole[0] = i;
				hole[1] = j;
			}
		}
	}
	cout << bfs();
}
