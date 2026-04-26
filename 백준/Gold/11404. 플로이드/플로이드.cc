#include <stdio.h>
#define INF 50000000
int data[105][105];
int main(void)
{
	int n;
	int m;
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(int i=1; i<=m; i++)
	{
		int start, end, value;
		scanf("%d %d %d",&start,&end,&value);
		if(data[start][end] == 0 || data[start][end] > value)
		{
			data[start][end] = value;
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(data[i][j] == 0)
			{
				data[i][j] = INF;
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
				if(data[i][j] > data[i][k] + data[k][j])
				{
					data[i][j] = data[i][k] + data[k][j];	
				}
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(data[i][j] >= INF)
			{
				data[i][j] = 0;
			}
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}
}