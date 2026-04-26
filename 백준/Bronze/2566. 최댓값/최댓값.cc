#include <iostream>
using namespace std;
int value[9][9];
int max_value = -1;
int main(void)
{
	int x, y;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> value[i][j];
			if (max_value < value[i][j])
			{
				max_value = value[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	cout << max_value << endl;
	cout << x << " " << y;
}