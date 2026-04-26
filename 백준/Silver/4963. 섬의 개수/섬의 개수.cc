#include <stdio.h>
#include <stdbool.h>
#include <utility>
#include <queue>
using namespace std;
bool visited[55][55]={0};
bool visited2[55][55]={0};
queue <pair<int, int> > bfs_queue;
int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
void bfs()
{
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front().first;
		int y = bfs_queue.front().second;
		
		for(int i=0; i<8; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(visited[new_x][new_y] == true && visited2[new_x][new_y] == true)
			{
				visited2[new_x][new_y] = false;
				bfs_queue.push(make_pair(new_x,new_y));	
			}
		}
		bfs_queue.pop();
	}
}
int main(void)
{
	int n=1,m=1;
	while(n != 0 && m != 0)
	{
		int count = 0;
		scanf("%d %d",&m,&n);

		if(n == 0 && m == 0)
		{
			break;
		}
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				scanf("%d",&visited[i][j]);
				visited2[i][j] = true;
			}
		}
	
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				if(visited[i][j] == true && visited2[i][j] == true)
				{
					count++;
					visited2[i][j] = false;
					bfs_queue.push(make_pair(i,j));
					bfs();
				}
			}
		}
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				visited[i][j] = false;
			}
		}
		printf("%d\n",count);
	}
}