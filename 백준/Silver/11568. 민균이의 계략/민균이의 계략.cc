#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int data[1005];
	int dp[1005];
	int	n;
	int max_value=0;
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<i; j++)
		{
			if(data[i] > data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		max_value = max(max_value,dp[i]);
	}
	printf("%d\n",max_value);
}
	