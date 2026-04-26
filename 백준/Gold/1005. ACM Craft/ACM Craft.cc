#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <vector>

using namespace std;
int dp[1005];
int visited[1005][1005]={0};

int dfs(int target,int n, int value[],int dp[])
{
	int dfs_value;
	int dfs_max = 0;
	int answer;
	if(dp[target] != -1)
	{
		return dp[target];
	}
	
	for(int i=1; i<=n; i++)
	{
		if(visited[i][target] == 1)
		{
			dfs_value = dfs(i,n,value,dp);
			if(dfs_value > dfs_max)
			{
				dfs_max = dfs_value;
			}
		}
	}
	
	answer = value[target] + dfs_max;
	if(dp[target] < answer)
	{
		dp[target] = answer;
	}
	return answer;
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,k;
		int value[1005]={0};
		int target;
		scanf("%d %d",&n,&k);
		
		for(int i=1; i<=n; i++)
		{
			scanf("%d",&value[i]);
		}
		
		memset(dp,-1,sizeof(dp));
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				visited[i][j] = 0;
			}
		}
		for(int i=1; i<=k; i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			visited[x][y] = 1;
		}
		scanf("%d",&target);
		
		printf("%d\n",dfs(target,n,value,dp));
		
	}
}