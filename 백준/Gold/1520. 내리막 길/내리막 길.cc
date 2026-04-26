#include <stdio.h>
#include <stdbool.h>
int dp[505][505];
int data[505][505];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int count = 0;
int n,m;
bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	if(y <= 0 || y > m)
	{
		return false;
	}
	return true;
}
int dfs(int x, int y)
{
	if(x == 1 && y == 1)
	{	
		return 1;
	}
	if(dp[x][y] != -1)
	{
		return dp[x][y];
	}
	dp[x][y] = 0;
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if((safe(new_x,new_y) == true) && (data[x][y] < data[new_x][new_y]))
		{
			dp[x][y] += dfs(new_x,new_y);
		}
	}
	return dp[x][y];
}
int main(void)
{
	scanf("%d %d",&n,&m);
	int value;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
			dp[i][j] = -1;
		}
	}
	printf("%d\n",dfs(n,m));
}
	