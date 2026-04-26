#include <stdio.h>
#include <math.h>

int ans = 0;
int n,m;
int dp[1005][1005];
int data[1005][1005];
int min(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%1d",&data[i][j]);
			if(ans < data[i][j])
			{
				ans = data[i][j];
			}
			if(data[i][j] == 0)
			{
				dp[i][j] = 0;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		if(data[i][1] == 1)
		{
			dp[i][1] = 1;
		}
		else
		{
			dp[i][1] = 0;
		}
		
		if(data[1][i] == 1)
		{
			dp[1][i] = 1;
		}
		else
		{
			dp[1][i] = 0;
		}
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=2; j<=m; j++)
		{
			int value[3];
			int min_value;
			value[0] = sqrt(dp[i-1][j-1]);
			value[1] = sqrt(dp[i][j-1]);
			value[2] = sqrt(dp[i-1][j]);
			
			min_value = min(min(value[0],value[1]),value[2]);
			if(data[i][j] != 0)
			{
				dp[i][j] = (min_value + 1) * (min_value + 1);
			}
			if(ans < dp[i][j])
			{
				ans = dp[i][j];
			}
		}
	}
	
	printf("%d\n",ans);
	
}