#include <stdio.h>
int main(void)
{
	int n;
	int dp[100005];
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		dp[i] = i;
		for(int j=1; j * j <= i; j++)
		{
			if(dp[i] > dp[i-j*j] + 1)
			{
				dp[i] = dp[i-j*j] + 1;
			}
		}
	}
	printf("%d\n",dp[n]);
}