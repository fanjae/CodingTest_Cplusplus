#include <iostream>
#include <cstdio>
#pragma warning (disable:4996)
using namespace std;
int quad[65][65];
void quad_cut(int n, int x, int y) 
{
	if (n == 1) // 최대한 쪼갰으나, 압축이 불가능.
	{
		printf("%d", quad[x][y]);
		return;
	}
	int cut_size = n / 2;
	int sum = 0;
	for (int i = x; i < x + n; i++) // 쿼드 트리의 합으로 압축 가능 여부 판단.
	{
		for (int j = y; j < y + n; j++)
		{
			sum += quad[i][j];
		}
	}

	if (sum == 0 || sum == n * n) // 압축 가능한 경우
	{
		printf("%d", quad[x][y]);
	}
	else // 압축이 불가능해 쪼개야 하는 경우
	{
		printf("(");
		quad_cut(cut_size, x, y);
		quad_cut(cut_size, x, y + cut_size);
		quad_cut(cut_size, x + cut_size, y);
		quad_cut(cut_size, x + cut_size, y + cut_size);
		printf(")");
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
			scanf("%1d", &quad[i][j]);
		}
	}
	quad_cut(n, 0, 0);
}