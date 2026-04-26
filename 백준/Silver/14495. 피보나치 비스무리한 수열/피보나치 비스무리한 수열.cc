#include <stdio.h>
#include <string.h>
long long int dp[120];
long long int fibo(int n)
{
	if(dp[n] != -1)
	{
		return dp[n];
	}
	if(n <= 3)
	{
		return dp[n] = 1;
	}
	else
	{
		return dp[n] = fibo(n-1) + fibo(n-3);	
	}
}
		
int main(void)
{
	int n;
	scanf("%d",&n);
	
	memset(dp,-1,sizeof(dp));
	printf("%lld",fibo(n));
}