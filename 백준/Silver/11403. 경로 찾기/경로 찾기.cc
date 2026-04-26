#include <stdio.h>
#define INF 5000000
int data[105][105];
int main(void)
{
	int n;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d",&data[i][j]);
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
			else
			{
				data[i][j] = 1;
			}
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}
	
}