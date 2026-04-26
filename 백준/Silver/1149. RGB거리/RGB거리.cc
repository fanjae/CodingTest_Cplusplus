#include <stdio.h>
int min(int a, int b)
{
	if(a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	int n;
	int data[1005][3];
	int dp[1005][3];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for(int i=0; i<3; i++) dp[0][i] = data[0][i];
	for(int i=1; i<n; i++)
	{
		dp[i][0] = min(dp[i-1][1] + data[i][0],dp[i-1][2] + data[i][0]);
		dp[i][1] = min(dp[i-1][0]+data[i][1],dp[i-1][2]+data[i][1]);
		dp[i][2] = min(dp[i-1][1] + data[i][2],dp[i-1][0] + data[i][2]);
	}
	int set=dp[n-1][0];
	for(int i=0; i<3; i++)
	{
		if(set > dp[n-1][i])
		{
			set = dp[n-1][i];
		}
	}
	printf("%d\n",set);
}