#include <stdio.h>
int main(void)
{
	int n;
	int data[1005];
	int dp[1005]={0};
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = data[i];
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
		//	printf("%d %d %d %d %d %d\n",i,j,data[i],data[j],dp[i],dp[j]);
			if(data[i] > data[j] && dp[i] <= dp[j] + data[i])
			{
				dp[i] = dp[j] + data[i];
				
			}
		}
	}
	
	int max = 0;
	for(int i=1; i<=n; i++)
	{
		if(max < dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d\n",max);
}
	