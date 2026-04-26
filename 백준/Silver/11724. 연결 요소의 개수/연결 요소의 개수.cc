#include <stdio.h>
#include <stdbool.h>
int n,m;
bool node[1005][1005]={0};
bool visited[1005]={0};
void dfs(int x)
{
	visited[x] = true;
	
	for(int i=1; i<=n; i++)
	{
		if(visited[i] == false && node[x][i] == true)
		{
			visited[i] = true;
			dfs(i);
		}
	}
}
int main(void)
{
	int count = 0;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		node[x][y] = 1;
		node[y][x] = 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(visited[i] == false)
		{
			count++;
			visited[i] = true;
			dfs(i);
		}
	}
	printf("%d\n",count);
}