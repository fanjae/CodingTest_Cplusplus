#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int dp[305][305]={0};
	int data[305][305]={0};
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for(int i=1; i<=n; i++)
	{
		dp[i][1] = dp[i-1][1] + data[i][1];
	}
	for(int i=1; i<=m; i++)
	{
		dp[1][i] = dp[1][i-1] + data[1][i];
	}
	for(int i=2; i<=n; i++)
	{
		for(int j=2; j<=m; j++)
		{
			dp[i][j] = max(dp[i-1][j] + data[i][j],dp[i][j-1]+data[i][j]);
		}
	}	
	printf("%d\n",dp[n][m]);
}