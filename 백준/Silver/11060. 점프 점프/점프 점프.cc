#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int dp[1005]={0};
	int data[1005]={0};
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = -1;
	}
	dp[1] = 0;
	for(int i=1; i<=n; i++)
	{
		if(dp[i] == -1)
		{
			continue;
		}
		for(int j=1; j<=data[i]; j++)
		{
			if(i + j > n)
			{
				break;
			}
			if(dp[i+j] == -1)
			{
				dp[i+j] = dp[i] + 1;
			}
			else if(dp[i+j] != -1)
			{
				dp[i+j] = min(dp[i]+1,dp[i+j]);
			}
		}
	}
	printf("%d\n",dp[n]);
}