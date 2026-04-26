#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,m;
	int dp[105][105];
	char data[105][105];
	memset(dp,-1,sizeof(dp));
	
	scanf("%d %d",&n,&m);
	getchar();
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m+1; j++)
		{
			scanf("%c",&data[i][j]);
			if(data[i][j] == '\n')
			{
				data[i][j] = 0;
			}
			if(data[i][j] == 'c')
			{
				dp[i][j] = 0;
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(dp[i][j] == -1 && dp[i][j-1] != -1)
			{
				dp[i][j] = dp[i][j-1] + 1;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}
		
}