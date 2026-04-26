#include <stdio.h>
#include <stdbool.h>
int n;
int count=0;
bool visited[105]={0};
bool node[105][105]={0};
void dfs(int start)
{
	visited[start] = true;
		
	for(int i=1; i<=n; i++)
	{
		if(visited[i] == false && node[start][i] == true)
		{
			count++;
			dfs(i);
		}
	}
}
int main(void)
{
	int m;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		node[x][y]=true;
		node[y][x]=true;
	}
	dfs(1);
	printf("%d\n",count);
}