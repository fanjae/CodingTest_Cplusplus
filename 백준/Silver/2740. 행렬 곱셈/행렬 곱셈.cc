#include <stdio.h>
int main(void)
{
	int a[105][105];
	int b[105][105];
	int c[105][105]={0};
	
	int n,m,k;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&k);
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=k; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
		{
			for(int k=1; k<=m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}