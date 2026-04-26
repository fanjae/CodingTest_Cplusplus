#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n,m,p;
int cnt = 0;
int hate_channel[100005]={0};
bool visited[100005];
void dfs(int x)
{
	visited[x] = true;
	int target = hate_channel[x];
	if(target == 0)
	{
		printf("%d\n",cnt);
		exit(0);
	}
	else
	{
		if(visited[target] == true)
		{
			printf("-1\n");
			exit(0);
		}
		else
		{
			cnt++;
			dfs(target);
		}
	}	
}
	
int main(void)
{
	scanf("%d %d %d",&n,&m,&p);
	for(int i=1; i<=n; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		if(hate_channel[y] == 0)
		{
			hate_channel[y] = x;
		}		
	}
	dfs(p);		
}