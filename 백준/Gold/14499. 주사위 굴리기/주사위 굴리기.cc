#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
enum move_type
{
	EAST=1,
	WEST,
	NORTH,
	SOUTH
};

int dx[5] = { 0,0,0,-1,1 };
int dy[5] = { 0,1,-1,0, 0 };
int dice[7] = { 0 }; 
int n, m;
int start_x, start_y;
vector <vector<int>> map;

void dice_set(move_type move)
{
	int temp_dice[7];
	for (int i = 0; i < 7; i++)
	{
		temp_dice[i] = dice[i];
	}
	if (move == NORTH)
	{
		dice[1] = temp_dice[5];
		dice[5] = temp_dice[6];
		dice[6] = temp_dice[2];
		dice[2] = temp_dice[1];
	}
	else if (move == WEST)
	{
		dice[1] = temp_dice[3];
		dice[3] = temp_dice[6];
		dice[6] = temp_dice[4];
		dice[4] = temp_dice[1];
	}
	else if (move == EAST)
	{
		dice[1] = temp_dice[4];
		dice[4] = temp_dice[6];
		dice[6] = temp_dice[3];
		dice[3] = temp_dice[1];
	}
	else if (move == SOUTH)
	{
		dice[1] = temp_dice[2];
		dice[2] = temp_dice[6];
		dice[6] = temp_dice[5];
		dice[5] = temp_dice[1];
	}
}

bool safe(int x, int y)
{
	if (x < 0 || x >= n || y < 0 || y >= m)
	{
		return false;
	}
	return true;
}
int main(void)
{
	int command;
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	cin >> n >> m >> start_x >> start_y >> command;
	map.resize(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int data;
			cin >> data;
			map[i].push_back(data);
		}
	}
	for (int i = 0; i < command; i++)
	{
		int data;
		cin >> data;

		int target_x = start_x + dx[data];
		int target_y = start_y + dy[data];
		if (safe(target_x, target_y) == false)
		{
			continue;
		}
		else
		{
			start_x = start_x + dx[data];
			start_y = start_y + dy[data];
			dice_set(static_cast<move_type>(data));
			if (map[start_x][start_y] == 0)
			{
				map[start_x][start_y] = dice[6];
			}
			else
			{
				dice[6] = map[start_x][start_y];
				map[start_x][start_y] = 0;
			}
		}
		std::cout << dice[1] << std::endl;
	}

}