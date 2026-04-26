#include <stdio.h>
#define MOD 1000000009
long long int dp[1000005]={0};
int main(void)
{
	
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int value;
		scanf("%d",&value);
		if(dp[value] != 0)
		{
			printf("%lld\n",dp[value] % MOD);
			continue;
		}
		for(int i=4; i<=value; i++)
		{
			dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
		}
		printf("%lld\n",dp[value] % MOD);
	}
}