#include <stdio.h>
int data[105][105]={0};

int main(void)
{
	int n,k;
	int min = 2100000000;
	int ans = 0;
	scanf("%d %d",&n,&k);
	for(int i=1; i<=k; i++)
	{
		int x, y;
		scanf("%d %d",&x,&y);
		data[x][y] = 1;
		data[y][x] = 1;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(data[i][j] != 1)
			{
				data[i][j] = 5000000;
			}
		}
	}
	
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(i == j)
				{
					data[i][j] = 0;
				}
				if(data[i][k] + data[k][j] < data[i][j])
				{
					data[i][j] = data[i][k] + data[k][j];
				}
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		int sum = 0;
		for(int j=1; j<=n; j++)
		{
			sum += data[i][j];
		}
		if(min > sum)
		{
			min = sum;
			ans = i;
		}
	}
	printf("%d\n",ans);
}