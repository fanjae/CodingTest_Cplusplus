#include <stdio.h>
int dp[1005][1005];
int data[1005][1005];
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	dp[1][1] = data[1][1];
	for(int i=2; i<=n; i++)
	{
		dp[i][1] += dp[i-1][1] + data[i][1];
	}
	for(int i=2; i<=m; i++)
	{
		dp[1][i] += dp[1][i-1] + data[1][i];
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=2; j<=m; j++)
		{
			if(dp[i][j] < data[i][j] + dp[i-1][j])
			{
				dp[i][j] = data[i][j] + dp[i-1][j];
			}
			if(dp[i][j] < data[i][j] + dp[i][j-1])
			{
				dp[i][j] = data[i][j] + dp[i][j-1];
			}	
			if(dp[i][j] < data[i][j] + dp[i-1][j-1])
			{
				dp[i][j] = data[i][j] + dp[i-1][j-1];
			}
		}
	}
	
	printf("%d\n",dp[n][m]);
}