#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
char map_value[1505][1505];
bool visited_water[1505][1505];
bool visited_swan[1505][1505];
int swan_x, swan_y; 
int r, c;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

queue <pair<int, int>> water_que;
queue <pair<int, int>> water_ice_que;
queue <pair<int, int>> swan_que;

bool safe(int x, int y)
{
	if (x <= 0 || x >= r + 1)
	{
		return false;
	}
	if (y <= 0 || y >= c + 1)
	{
		return false;
	}
	return true;
}
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void input()
{
	bool set_swan = false;
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cin >> map_value[i][j];
			if (map_value[i][j] == 'L') // 백조 위치 확인한 경우.
			{
				if (set_swan == false) // 한 명의 위치를 기준으로 다른 백조를 탐색.
				{
					swan_x = i;
					swan_y = j;
					set_swan = true; // 한 명 위치만 알아도 됨.
					swan_que.push(make_pair(swan_x, swan_y));
					visited_swan[swan_x][swan_y] = true;
				}
				water_que.push(make_pair(i, j)); // 백조가 있는 곳도 물 공간. 따라서 이곳을 통해서도 빙판이 녹음.
				visited_water[i][j] = true;
			}
			else if (map_value[i][j] == '.') // 초기 물 공간
			{
				water_que.push(make_pair(i, j));
				visited_water[i][j] = true;
			}
		}
	}

}
bool swan_bfs() // 백조간의 탐색.
{
	bool find_swan = false;
	while (!swan_que.empty())
	{
		int x = swan_que.front().first;
		int y = swan_que.front().second;
		swan_que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (safe(new_x, new_y) == false) continue;
			if (map_value[new_x][new_y] == '.' && visited_swan[new_x][new_y] == false) // 물 공간 만난 경우
			{
				visited_swan[new_x][new_y] = true;
				swan_que.push(make_pair(new_x, new_y));
			}
			
			if (map_value[new_x][new_y] == 'X' && visited_swan[new_x][new_y] == false) // 빙산 만난 경우
			{
				visited_swan[new_x][new_y] = true; // 백조가 이곳을 왔다감. (추후 재방문의 여지)
			}
			if (map_value[new_x][new_y] == 'L' && visited_swan[new_x][new_y] == false) // 다른 백조를 만난 경우
			{
				
				return true;
			}
		}
	}
	return false; // 아직 만나지 못함. 
}
void water_bfs() // 물의 탐색.
{
	while (!water_que.empty())
	{
		int x = water_que.front().first;
		int y = water_que.front().second;
		water_que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if (safe(new_x, new_y) == false) continue;

			if (map_value[new_x][new_y] == '.' && visited_water[new_x][new_y] == false) // 물 공간 만난 경우
			{
				visited_water[new_x][new_y] = true;
				water_que.push(make_pair(new_x, new_y));
			}
			if (map_value[new_x][new_y] == 'X' && visited_water[new_x][new_y] == false) // 빙산 만난 경우
			{
				visited_water[new_x][new_y] = true;
				map_value[new_x][new_y] = '.';
				if (visited_swan[new_x][new_y] == true) // 백조가 방문한 적 있는 빙산인 경우 재 방문 필요.
				{
					swan_que.push(make_pair(new_x, new_y)); 
				}
				water_ice_que.push(make_pair(new_x, new_y)); // 녹은 빙산 정보 저장. (백조끼리 못만나면 여기도 다시 와야함)
			}
		}
	}
}
int bfs()
{
	int day = 0;
	bool find_swan = false;

	while (find_swan == false)
	{
		find_swan = swan_bfs();
		if (find_swan == true) // 백조가 서로 만났으므로, 걸린 날짜 반환.
		{
			return day;
		}
		if (find_swan == false) // 백조가 서로 못만났으면 녹았던 전날 녹았던 빙산 정보부터 다시 방문.
		{
			while (!water_ice_que.empty()) // 전날 녹았던 빙산 정보가 있는 큐를 체크.
			{
				int ice_x = water_ice_que.front().first;
				int ice_y = water_ice_que.front().second;
				water_ice_que.pop();

				water_que.push(make_pair(ice_x, ice_y)); 
			}
		}
		water_bfs();
		day++;
	}	
	return day;
}
int main(void)
{
	first_init();
	input();
	cout << bfs();
	
}