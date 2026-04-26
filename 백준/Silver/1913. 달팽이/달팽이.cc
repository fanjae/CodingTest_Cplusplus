#include <iostream>
using namespace std;
int snail[1005][1005];
int dx[4] = { -1,0,1,0 }; // 상, 우, 하, 좌
int dy[4] = { 0,1,0,-1 }; // 상, 우, 하, 좌
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	int index = 1;
	int n;
	int x;
	int y;
	int find_value;
	int find_x;
	int find_y;

	int cnt = 1;
	int move_type = 0;
	int set = 1;

	init();
	cin >> n;
	cin >> find_value;

	x = n / 2;
	y = n / 2;
	snail[x][y] = index;
	if (index == find_value)
	{
		find_x = x + 1;
		find_y = y + 1;
	}

	while (index <= n * n)
	{
		for (int i = 1; i <= cnt; i++)
		{
			int new_x = x + dx[move_type % 4];
			int new_y = y + dy[move_type % 4];
			snail[new_x][new_y] = ++index;

			if (index == find_value)
			{
				find_x = new_x + 1;
				find_y = new_y + 1;
			}
			if (index == n * n)
			{
				break;
			}

			x = new_x;
			y = new_y;
			
			if (i == cnt) set++;
		}
		if (index == n * n)
		{
			break;
		}

		if (set % 2 == 1)
		{
			cnt++;
		}
		move_type++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != n - 1) cout << snail[i][j] << " ";
			else cout << snail[i][j] << " ";
		}
		cout << "\n";
	}
	cout << find_x << " " << find_y;
}