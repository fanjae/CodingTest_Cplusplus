#include <stdio.h>
#include <string.h>
long long int dp[40];
long long int t(int n)
{
	long long int ans = 0;
	
	if(dp[n] != 0)
	{
		return dp[n];
	}
	
	for(int i=0; i<n; i++)
	{
		ans += (t(i) * t(n-i-1));
	}
	
	return dp[n] = ans;
}
int main(void)
{
	int n;
	memset(dp,-1,sizeof(40));
	dp[0] = 1;
	scanf("%d",&n);
	printf("%lld\n",t(n));
}