#pragma warning(disable: 4996)

#include <stdio.h>
int data[20][20] = { 0 };
int main(void)
{
	int T;
	scanf("%d", &T);
	for (int i = 1; i < 16; i++)
	{
		data[0][i] = i;
	}
	while (T--)
	{
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int sum = 0;
				for (int k = 1; k <= j; k++)
				{
					sum += data[i - 1][k];
				}
				data[i][j] = sum;
			}
		}

		printf("%d\n", data[k][n]);
	}
}