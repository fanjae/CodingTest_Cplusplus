#include <stdio.h>
int main()
{
	long long int n;
	long long int dp[1005]={0};
	scanf("%lld",&n);
	
	dp[1] = 1;
	dp[2] = 3;
	for(int i=3; i<=n; i++)
	{
		dp[i] = (dp[i-1] + dp[i-2]*2) % 10007;
	}
	printf("%lld\n",dp[n]%10007);
}