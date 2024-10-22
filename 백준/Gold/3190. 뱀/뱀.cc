#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>
using namespace std;
int map[105][105];
int n;
int apple_count;
int event_count;
int now_move = 1;
deque <pair<int, int>> snake;
queue <pair<int, int>> move_snake;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
bool safe(int x, int y)
{
	if (x < 1 || x > n || y < 1 || y > n)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	bool snake_crash = false;

	cin >> n;
	cin >> apple_count;

	for (int i = 1; i <= apple_count; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
	}
	cin >> event_count;

	for (int i = 1; i <= event_count; i++)
	{
		int time;
		char move;

		cin >> time >> move;
		if (move == 'L')
		{
			move_snake.push({ time,  3});
		}
		else if (move == 'D')
		{
			move_snake.push({ time,  1});
		}
	}

	snake.push_back({ 1,1 });
	while (1)
	{
		int x = snake.front().first;
		int y = snake.front().second;

		int new_x = x + dx[now_move];
		int new_y = y + dy[now_move];
		answer++;
		if (safe(new_x, new_y) == false)
		{
			break;
		}
		else
		{
			for (auto snake_value : snake)
			{
				if (snake_value.first == new_x && snake_value.second == new_y)
				{
					snake_crash = true;
					break;
				}
			}
			if (snake_crash == true)
			{
				break;
			}
			snake.push_front({ new_x ,new_y });
			if (!move_snake.empty() && answer == move_snake.front().first)
			{
				now_move = (now_move + move_snake.front().second) % 4;
				move_snake.pop();
			}
			if (map[new_x][new_y] == 1)
			{
				map[new_x][new_y] = 0;
			}
			else
			{
				snake.pop_back();
			}
		}
	}
	std::cout << answer;
}

