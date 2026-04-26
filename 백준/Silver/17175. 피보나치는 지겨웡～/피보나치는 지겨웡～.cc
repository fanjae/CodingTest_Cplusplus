#include <stdio.h>
#define MOD 1000000007
long long int dp[55]={1,1,3};
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=3; i<=n; i++)
	{
		dp[i] = (dp[i-1] + dp[i-2] + 1) % MOD;
	}
	printf("%lld\n",dp[n]);
}
	