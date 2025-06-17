#include <cstdio>
#pragma warning (disable:4996)
using namespace std;
char star[6145][6145];
void fill(int n, int x, int y)
{
	if (n == 3) // n = 3이면 별을 그림.
	{
		star[x][y + 2] = '*';
		star[x + 1][y + 1] = '*';
		star[x + 1][y + 3] = '*';
		star[x + 2][y] = '*';
		star[x + 2][y + 1] = '*';
		star[x + 2][y + 2] = '*';
		star[x + 2][y + 3] = '*';
		star[x + 2][y + 4] = '*';
	}
	else
	{
		int size = n / 2;
		fill(size, x, y + size); // 윗 별
		fill(size, x + size, y); // 왼쪽 아래 
		fill(size, x + size, y + size * 2); // 오른쪽 아래
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			star[i][j] = ' '; // 띄어쓰기 미리 채움
		}
	}
	fill(n, 0, 0);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", star[i]);
	}
}