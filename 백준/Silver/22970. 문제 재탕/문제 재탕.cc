#include <stdio.h>
int data[5005];
int dp[5005];
int main(void)
{
	int n;
	int first = 0;
	int max_value = 0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=i-1; j<=i; j++)
		{
			if(data[i] > data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=i-1; j<=i; j++)
		{
			if(data[i] < data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		if(dp[i] > max_value)
		{
			max_value = dp[i];
		}
	}
	printf("%d\n",max_value);
}
		