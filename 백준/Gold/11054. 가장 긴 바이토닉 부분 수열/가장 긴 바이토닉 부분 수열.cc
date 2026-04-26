#include <stdio.h>
int main(void)
{
	int n;
	int max = 0;
	int dp[1005];
	int data[1005];
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(data[i] > data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(data[i] < data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		if(max < dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d\n",max);
}