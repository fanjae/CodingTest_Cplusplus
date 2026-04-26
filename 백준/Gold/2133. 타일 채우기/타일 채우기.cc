#include <stdio.h>
int main(void)
{
	int n;
	long long int dp[35]={0};
	scanf("%d",&n);
	dp[0] = 1;
	dp[2] = 3;
	dp[4] = (dp[2] * 3) + (dp[0] * 2);
	for(int i=6; i<=n; i+=2)
	{
		dp[i] = dp[i] + (dp[i-2] * 3); // 정방향 
		dp[i] += dp[0] * 2; // i에 대한 특수  
		for(int j=2; j<i-2; j+=2) // 특수 
		{
			dp[i] += dp[j] * 2;
		}
	}
	printf("%lld",dp[n]);
}