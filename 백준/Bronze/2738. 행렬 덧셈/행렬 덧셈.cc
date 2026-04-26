#include <stdio.h>
int main(void)
{
	int a[105][105];
	int b[105][105];
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}	
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}