#include <iostream>
using namespace std;
int map[30][30];
int horizontal_process(int i, int j)
{
	int count[2] = { 0 };
	for (int k = 0; k < 5; k++) // 가로 계산
	{
		if (map[i][j + k] == 1) count[0]++;
		else if (map[i][j + k] == 2) count[1]++;
	}
	if (count[0] == 5)
	{
		if (map[i][j - 1] != 1 && map[i][j + 5] != 1)
		{
			return 1;
		}
	}
	else if (count[1] == 5)
	{
		if (map[i][j - 1] != 2 && map[i][j + 5] != 2)
		{
			return 2;
		}
	}
	return 0;
}
int vertical_process(int i, int j) // 세로 계산
{
	int count[2] = { 0 };
	for (int k = 0; k < 5; k++)
	{
		if (map[i + k][j] == 1) count[0]++;
		else if (map[i + k][j] == 2) count[1]++;
	}
	if (count[0] == 5)
	{
		if (map[i - 1][j] != 1 && map[i + 5][j] != 1)
		{
			return 1;
		}
	}
	else if (count[1] == 5)
	{
		if (map[i - 1][j] != 2 && map[i + 5][j] != 2)
		{
			return 2;
		}
	}
	return 0;
}
int diagonal_process_typeA(int i, int j) // 대각선 계산 (↘ 방향.)
{
	int count[2] = { 0 };
	for (int k = 0; k < 6; k++)
	{
		if (map[i + k][j + k] == 1) count[0]++;
		else if(map[i + k][j + k] == 2) count[1]++;
	}
	if (count[0] == 5)
	{
		if (map[i - 1][j - 1] != 1 && map[i + 5][j + 5] != 1) 
		{
			return 1;
		}
	}
	else if (count[1] == 5)
	{
		if (map[i - 1][j - 1] != 2 && map[i + 5][j + 5] != 2)
		{
			return 2;
		}
	}
	return 0;
}
int diagonal_process_typeB(int i, int j) // 대각선 계산 (↗ 방향.)
{
	int count[2] = { 0 };
	for (int k = 0; k < 5; k++)
	{
		if (map[i - k][j + k] == 1) count[0]++;
		else if (map[i - k][j + k] == 2) count[1]++;
	}
	if (count[0] == 5)
	{
		if (map[i + 1][j - 1] != 1 && map[i - 5][j + 5] != 1)
		{
			return 1;
		}
	}
	else if (count[1] == 5)
	{
		if (map[i + 1][j - 1] != 2 && map[i - 5][j + 5] != 2)
		{
			return 2;
		}
	}
	return 0;
}
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	int result;
	for (int i = 5; i < 24; i++)
	{
		for (int j = 5; j < 24; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 5; i < 24; i++)
	{
		for (int j = 5; j < 24; j++)
		{
			result = horizontal_process(i, j);
			if (result)
			{
				cout << result << "\n"; 
				cout << i-4 << " " << j-4 << "\n";
				return 0;
			}

			result = vertical_process(i, j);
			if (result)
			{
				cout << result << "\n";
				cout << i-4 << " " << j-4 << "\n";
				return 0;
			}

			result = diagonal_process_typeA(i, j);
			if (result)
			{
				cout << result << "\n";
				cout << i-4 << " " << j-4 << "\n";
				return 0;
			}

			result = diagonal_process_typeB(i, j);
			if (result)
			{
				cout << result << "\n";
				cout << i-4 << " " << j-4 << "\n";
				return 0;
			}
		}
	}
	cout << 0;
}