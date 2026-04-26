#include <stdio.h>
int main(void)
{
	long long int dp[85]={0,1,1};
	int n;
	scanf("%d",&n);
	for(int i=3; i<=n+1; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	printf("%lld\n",(dp[n+1]+dp[n])*2);
}