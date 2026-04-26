#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool visited[1005]={0};
int data[1005]={0};
int cnt = 0;
void dfs(int x)
{
	if(visited[data[x]] == false)
	{
		visited[data[x]] = true;
		dfs(data[x]);
	}
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		cnt = 0;
		memset(visited,false,sizeof(visited));
		memset(data,0,sizeof(data));
		
		scanf("%d",&n);
		for(int i=1; i<=n; i++)
		{
			scanf("%d",&data[i]);
		}
		
		for(int i=1; i<=n; i++)
		{
			if(visited[i] == false)
			{
				cnt++;
				visited[i] = true;
				dfs(i);
			}
		}
		printf("%d\n",cnt);
	}
}