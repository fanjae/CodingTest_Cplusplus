#include <stdio.h>
#define MOD 1000000000
int dp[1000005]={0};
int main(void)
{
	dp[1] = 1;
	dp[2] = 2;
	int n;
	scanf("%d",&n);
	for(int i=3; i<=n; i++)
	{
		if(i % 2 == 1)
		{
			dp[i] = dp[i-1] % MOD;
		}
		else
		{
			dp[i] = (dp[i-1] + dp[i/2]) % MOD;
		}
	}	
	printf("%d",dp[n]);
}