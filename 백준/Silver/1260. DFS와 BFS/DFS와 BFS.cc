#include <stdio.h>
#include <queue>
#include <stdbool.h>

using namespace std; 

bool dfs_visited[1005]={0};
bool bfs_visited[1005]={0};
bool node[1005][1005]={0};
int n;

queue <int> bfs_queue;
void dfs(int start)
{
	dfs_visited[start] = true;
	printf("%d ",start);
	
	for(int i=1; i<=n; i++)
	{
		if(dfs_visited[i] == false && node[start][i] == true)
		{
			dfs(i);
		}
	}
}
void bfs(int start)
{
	bfs_visited[start] = true;
	bfs_queue.push(start);
	
	while(bfs_queue.empty() == false)
	{
		int value = bfs_queue.front();
		for(int i=1; i<=n; i++)
		{
			if(bfs_visited[i] == false && node[value][i] == true)
			{
				bfs_visited[i] = true;
				bfs_queue.push(i);
			}
		}
		printf("%d ",value);
		bfs_queue.pop();
	}
}
int main(void)
{
	int m,start;
	scanf("%d %d %d",&n,&m,&start);
	
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		
		node[x][y] = true;
		node[y][x] = true;	
	}
	dfs(start);
	printf("\n");
	bfs(start);
}
	