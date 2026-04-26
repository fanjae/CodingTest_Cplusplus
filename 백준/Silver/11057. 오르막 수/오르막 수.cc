#include <stdio.h>
#define MOD 10007
int main(void)
{
	int n;
	long long int ans = 0;
	long long int dp[1005][20]={0};
	scanf("%d",&n);
	
	for(int i=0; i<=9; i++)
	{
		dp[1][i] = 1;
	}
	for(int i=2; i<=n; i++)
	{
		dp[i][0] = 1;
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<=9; j++)
		{
			dp[i][j] = (dp[i][j-1] % MOD) + (dp[i-1][j] % MOD);
		}
	}
	
	for(int i=0; i<=9; i++)
	{
		ans += dp[n][i];
	}
	
	printf("%lld",ans % MOD);
}
	