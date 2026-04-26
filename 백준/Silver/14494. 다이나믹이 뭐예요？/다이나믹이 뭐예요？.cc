#include <stdio.h>
#include <string.h>
#define MOD 1000000007
long long int dp[1005][1005]={0};
long long int root(int n, int m)
{
	if(dp[n][m] != -1)
	{
		return dp[n][m] % MOD;
	}
	
	if(n <= 0 || m <= 0)
	{
		return dp[n][m] = 0;
	}
	else
	{
		return dp[n][m] = (root(n-1,m) + root(n,m-1) + root(n-1,m-1)) % MOD;
	}
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	memset(dp,-1,sizeof(dp));
	dp[1][1] = 1;
	
	printf("%lld",root(n,m));	
}