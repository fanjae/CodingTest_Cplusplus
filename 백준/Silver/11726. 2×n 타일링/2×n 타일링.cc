#include <stdio.h>
int main()
{
	int n;
	long long int dp[1005];
	dp[1] = 1;
	dp[2] = 2;
	scanf("%d",&n);
	for(int i=3; i<=n; i++)
	{
		dp[i] = (dp[i-2] + dp[i-1]) % 10007;
	}
	printf("%lld\n",dp[n]);
}