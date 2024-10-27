#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n;
int map_data[25][25];
int start_x, start_y;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int current_shark = 2;
int current_eat_fish = 0;
vector <pair<int, int>> fishes;
bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.first != b.first)
	{
		return a.first < b.first;;
	}
	else
	{
		return a.second < b.second;
	}
}
bool safe(int x, int y)
{
	if (x < 0 || x == n)
	{
		return false;
	}
	if (y < 0 || y == n)
	{
		return false;
	}
	return true;
}
int bfs(int x, int y)
{
	int min_answer = 1e5;
	bool visited[25][25] = { 0 };
	queue<pair<pair<int, int>, int>> que;
	que.push({{x,y}, 0});
	
	while (!que.empty())
	{
		int que_x = que.front().first.first;
		int que_y = que.front().first.second;
		int cnt = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = que_x + dx[i];
			int new_y = que_y + dy[i];

			if (safe(new_x, new_y) == true)
			{
				if (visited[new_x][new_y] == false)
				{
					visited[new_x][new_y] = true;
					if (map_data[new_x][new_y] < current_shark && map_data[new_x][new_y] != 0 && cnt + 1 <= min_answer)
					{
						min_answer = cnt + 1;
						fishes.push_back({ new_x,new_y });
						que.push({ { new_x,new_y },cnt + 1 });
					}
					else if(map_data[new_x][new_y] == 0 || map_data[new_x][new_y] <= current_shark)
					{
						que.push({{ new_x,new_y },cnt+1});
					}
				}
			}
		}
	}
	return min_answer;
}
int main(void)
{
	int answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map_data[i][j];
			if (map_data[i][j] == 9)
			{
				start_x = i;
				start_y = j;
				map_data[i][j] = 0;
			}
		}
	}
	while (1)
	{
		int temp_answer = bfs(start_x, start_y);
		if (fishes.size() == 0)
		{
			break;
		}
		else
		{
			if (fishes.size() == 1)
			{
				start_x = fishes[0].first;
				start_y = fishes[0].second;
				map_data[start_x][start_y] = 0;
			}
			else
			{
				sort(fishes.begin(), fishes.end(), compare);
				start_x = fishes[0].first;
				start_y = fishes[0].second;
				map_data[start_x][start_y] = 0;
			}
			current_eat_fish++;
			if (current_eat_fish == current_shark)
			{
				current_shark++;
				current_eat_fish = 0;
			}
			answer += temp_answer;
		}
		fishes.clear();
	}
	cout << answer;
}

