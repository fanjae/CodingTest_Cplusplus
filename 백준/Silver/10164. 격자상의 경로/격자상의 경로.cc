#include <stdio.h>
#include <string.h>
int target_x,target_y;
int n,m;
int dp[20][20];
int data[20][20];
int cal(int x, int y)
{
	if(dp[x][y] != -1)
	{
		return dp[x][y];
	}
	
	if(x <= 0 || y <= 0)
	{
		return dp[x][y] = 0;	
	}
	
	if(target_x != 0 && target_y != 0)
	{
		if(x < target_x && y > target_y)
		{
			return dp[x][y] = 0;
		}
		if(x > target_x && y < target_y)
		{
			return dp[x][y] = 0;
		}
	}
	
	return dp[x][y] = (cal(x-1,y) + cal(x,y-1));
}

int main(void)
{
	int k;
	int cnt = 1;
	scanf("%d %d %d",&n,&m,&k);
	
	memset(dp,-1,sizeof(dp));
	dp[1][1] = 1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			data[i][j] = cnt;
			if(cnt == k)
			{
				target_x = i;
				target_y = j;
			}
			cnt++;
		}
	}
	
	cal(n,m);
	printf("%d\n",dp[n][m]);
}