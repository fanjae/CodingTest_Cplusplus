#include <cstdio>
using namespace std;
char star[6562][6562];
void fill(int n, int x, int y)
{
	if (n == 3) // n = 3일때는 창문 느낌으로 별을 채움
	{
		for (int i = x; i < x + 3; i++)
		{
			for (int j = y; j < y + 3; j++)
			{
				if (!(i == x + 1 && j == y + 1)) star[i][j] = '*';
			}
		}
		return;
	}
	else
	{
		int size = n / 3; // 가운데를 제외한 8방향 탐색
	
		fill(size, x, y);
		fill(size, x, y + size);
		fill(size, x, y + size * 2);

		fill(size, x + size, y);
		fill(size, x + size, y + size * 2);

		fill(size, x + size * 2, y);
		fill(size, x + size * 2, y + size);
		fill(size, x + size * 2, y + size * 2);
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			star[i][j] = ' ';
		}
		star[i][n] = NULL;
	}
	fill(n, 0, 0);

	for (int i = 0; i < n; i++)
	{
		printf("%s\n", star[i]);
	}
}