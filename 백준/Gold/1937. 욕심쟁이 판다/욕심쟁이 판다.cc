#include <cstdio>
#include <algorithm>
int n;
int max_value;
using namespace std; 

bool safe(int x,int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	if(y <= 0 || y > n)
	{
		return false;
	}
	return true;
}
int dfs(int x, int y, int data[][505], int dp[][505])
{
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,1,-1};
	int value = 0;
	
	if(dp[x][y] != 0)
	{
		return dp[x][y];
	}
	dp[x][y] = 1;
	
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if(safe(new_x,new_y) == true && data[x][y] < data[new_x][new_y])
		{
			dp[x][y] = max(dp[x][y],dfs(new_x,new_y,data,dp) + 1);
			if(value > dp[x][y])
			{
				dp[x][y] = value;
			}
		}
	}
	return dp[x][y];

}
int main(void)
{

	int dp[505][505]={0};
	int data[505][505]={0};
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d",&data[i][j]);
			dp[i][j] = 0;
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			dfs(i,j,data,dp);
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			max_value = max(max_value,dp[i][j]);
		}
	}
	printf("%d\n",max_value);
}
		