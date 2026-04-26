#include <stdio.h>
#include <string>
#define MOD 1000000007
long long int dp[1520]={0,0,1,1};
int main(void)
{
	int n;
	scanf("%d",&n);
	
	// dp[1] = 0
	// dp[2] = 1 // (15)
	// dp[3] = 1 // (555)
	// dp[4] = dp[i-1] + dp[i-2] * 2 
	for(int i=4; i<=n; i++)  
	{
		dp[i] = (dp[i-1] + dp[i-2] * 2) % MOD;
	}
	printf("%lld\n",dp[n]);	
}