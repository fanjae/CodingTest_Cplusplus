#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int n;
	bool dp[1005];
	scanf("%d",&n);
	
	dp[1] = true;
	dp[2] = false;
	dp[3] = true;
	dp[4] = false;
	for(int i=5; i<=n; i++)
	{
		if(dp[i-1] == false && dp[i-3] == false && dp[i-4] == false)
		{
			dp[i] = true;
		}
		else
		{
			dp[i] = false;
		}
	}
	
	if(dp[n] == false)
	{
		printf("SK");
	}
	else
	{
		printf("CY");
	}
}
	