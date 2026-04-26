#include <stdio.h>
int dp[100005];
int main(void)
{
	int n;
	dp[0] = 1;
	dp[1] = 3;
	
	scanf("%d",&n);
	for(int i=2; i<=n; i++)
	{
		dp[i] = (dp[i-1] * 2 + dp[i-2]) % 9901;
	}
	printf("%d\n",dp[n] );	
}