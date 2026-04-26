#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	long long int data[105];
	long long int sum = 0;
	long long int dp[105][105]={0};
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		scanf("%lld",&data[i]);
	}
	
	dp[data[1]][1]= 1;
	for(int i=2; i<n; i++)
	{
		for(int j=0; j<=20; j++)
		{
			if(dp[j][i-1] > 0)
			{
				if(j + data[i] <= 20)
				{
					dp[j+data[i]][i] += dp[j][i-1];
				}
				if(j - data[i] >= 0)
				{
					dp[j-data[i]][i] += dp[j][i-1];
				}
			}
		}
	}
	printf("%lld\n",dp[data[n]][n-1]);
	
}
	