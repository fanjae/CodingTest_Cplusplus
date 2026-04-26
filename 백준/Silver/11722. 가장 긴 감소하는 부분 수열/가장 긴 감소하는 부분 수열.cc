#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int dp[1005];
	int data[1005];
	int n;
	int max_value = 0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	
	for(int i=n; i>=1; i--)
	{
		for(int j=n; j>i; j--)
		{
			if(data[j] < data[i] && dp[j] >= dp[i])
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
