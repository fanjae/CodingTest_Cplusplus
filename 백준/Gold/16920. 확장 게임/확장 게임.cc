#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int visited[1005][1005];
char map[1005][1005];
int player[15];
int cnt[15];
int N, M, P;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

string map_string[1005];
queue <pair<int, int>> que[12];


void bfs()
{
	while (1)
	{
		for (int i = 1; i <= P; i++)
		{
			int len = player[i]; // si만큼 이동
			while (!que[i].empty() && len > 0) 
			{
				int que_size = que[i].size();
				for (int l = 0; l < que_size; l++)
				{
					int x = que[i].front().first;
					int y = que[i].front().second;
					que[i].pop();

					for (int j = 0; j < 4; j++)
					{
						int new_x = x + dx[j];
						int new_y = y + dy[j];


						if (new_x < 0 || new_x >= N || new_y < 0 || new_y >= M)
						{
							continue;
						}

						if (visited[new_x][new_y] == 0 && map[new_x][new_y] == '.')
						{
							visited[new_x][new_y] = i;
							cnt[i]++;
							que[i].push({ new_x,new_y });
						}
					}
				}
				len--;
			}
		}
		bool loop = true;
		for (int i = 1; i <= P; i++) // que에 남은게 없으면 모든 확장이 끝.
		{
			if (!que[i].empty())
			{
				loop = false;
				break;
			}
		}
		if (loop == true)
		{
			break;
		}
	}
}

int main(void)
{
	cin >> N >> M >> P;
	for (int i = 1; i <= P; i++)
	{
		cin >> player[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] != '.' && map[i][j] != '#')
			{
				que[map[i][j]-'0'].push({i,j});
				cnt[map[i][j]-'0']++;
				visited[i][j] = map[i][j] - '0';
			}
		}
	}

	bfs();

	for (int i = 1; i <= P; i++)
	{
		cout << cnt[i] << " ";
	}
}