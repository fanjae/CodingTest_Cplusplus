#include <stdio.h>
#include <queue>

using namespace std;

queue <int> bfs_queue;
bool visited[105]={0};
bool node[105][105]={0};
int ans[105]={0};

int n;
int ans_count = 0;
int start,end;

void bfs(int s)
{	
	bfs_queue.push(s);
	
	while(bfs_queue.empty() == false)
	{
		int bfs_x = bfs_queue.front();
		visited[bfs_x] = true;
		
		for(int i=1; i<=n; i++)
		{
			if(visited[i] == false && node[bfs_x][i] == true)
			{
				bfs_queue.push(i);
				ans[i] = ans[bfs_x] + 1;
			}
		}
		bfs_queue.pop();
	}
		
}
int main(void)
{
	int count;
	scanf("%d",&n);
	scanf("%d %d",&start,&end);
	scanf("%d",&count);
	for(int i=1; i<=count; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		node[x][y]=true;
		node[y][x]=true;
	}
	bfs(start);
	if(ans[end] == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",ans[end]);
	}
}