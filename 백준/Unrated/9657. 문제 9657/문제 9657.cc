#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	bool dp[1005];
	int n;
	dp[1] = true;
	dp[2] = false;
	dp[3] = true;
	dp[4] = true;

	scanf("%d",&n);	
	for(int i=5; i<=n; i++)
	{
		if(dp[i-1] == true && dp[i-3] == true && dp[i-4] == true)
		{
			dp[i] = false;
		}
		else
		{
			dp[i] = true;
		}
	}
	if(dp[n] == true)
	{
		printf("SK\n");
	}
	else
	{
		printf("CY\n");
	}
}