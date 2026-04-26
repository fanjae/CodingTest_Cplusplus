#include <stdio.h>
#define MOD 1000000000
int main(void)
{
	int n;
	long long int ans = 0;
	long long int dp[105][20]={0};
	scanf("%d",&n);
	
	dp[1][0] = 0;
	for(int i=1; i<=9; i++)
	{
		dp[1][i] = 1;
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=0; j<=9; j++)
		{
			dp[i][j] = dp[i-1][j-1] % MOD + dp[i-1][j+1] % MOD;
		}
	}
	for(int i=0; i<=9; i++)
	{
		ans += (dp[n][i] % MOD);
	}
	printf("%lld",ans % MOD);
}
	