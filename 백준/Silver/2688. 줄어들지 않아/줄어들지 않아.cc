#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		long long int ans = 0;
		long long int dp[15][1005]={0};
		scanf("%d",&n);
		for(int i=0; i<=9; i++)
		{
			dp[i][1] = 1;
			dp[i][2] = 10-i;	
		}
		for(int j=3; j<=n; j++)
		{
			for(int i=0; i<=9; i++)
			{
				for(int k=9; k>=i; k--)
				{
					dp[i][j] += dp[k][j-1];	
				}
			}
		}

		for(int i=0; i<=9; i++)
		{
			ans += dp[i][n];
		}
		printf("%lld\n",ans);
	}
}