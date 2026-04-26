#include <stdio.h>
#define INF 100000
int main(void)
{
	int dp[100005]={0};
	int count[2]={2,5};
	int n;
	dp[2] = 1;
	dp[5] = 1;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		if(dp[i] == 0)
		{
			continue;
		}
		for(int j=0; j<=1; j++)
		{
			if(dp[i+count[j]] == 0 || dp[i+count[j]] > dp[i] + 1)
			{
				dp[i+count[j]] = dp[i] + 1;
			}
		}
	}
	
	if(dp[n] == 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",dp[n]);
	}
}
	