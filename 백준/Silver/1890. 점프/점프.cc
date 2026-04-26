#include <stdio.h>
#include <stdbool.h>

int n;
long long  int data[105][105];
long long int dp[105][105];

long long int dx[2]={1,0};
long long int dy[2]={0,1};
long long int dfs(int x, int y)
{
	if(x == n && y == n)
	{
		return 1;
	}
	if(dp[x][y] != -1)
	{
		return dp[x][y];
	}
	dp[x][y] = 0;
	for(int i=0; i<2; i++)
	{
		int new_x = x + (dx[i] * data[x][y]);
		int new_y = y + (dy[i] * data[x][y]);
		
		dp[x][y] += dfs(new_x,new_y);	
	}
	return dp[x][y];
}
int main(void)
{
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%lld",&data[i][j]);
			dp[i][j] = -1;
		}
	}
	printf("%lld\n",dfs(1,1));
}