#include <stdio.h>
#include <utility>
#include <queue>

using namespace std;
int count[1005][1005]={0};
int tomato[1005][1005]={0};
int after_tomato[1005][1005]={0};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int ans=0;
bool not_done;
int m,n;

queue <pair<int, int> > bfs_queue;

bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	else if(y <= 0 || y > m)
	{
		return false;
	}
	else if(tomato[x][y] == -1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void bfs()
{
	while(bfs_queue.empty() == false)
	{
		for(int i=0; i<4; i++)
		{
			int x = bfs_queue.front().first;
			int y = bfs_queue.front().second;
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && tomato[new_x][new_y] == 0 && (count[new_x][new_y] == 0))
			{
				bfs_queue.push(pair<int,int>(new_x,new_y));
				after_tomato[new_x][new_y] = 1;
				count[new_x][new_y] = count[x][y] + 1;
			}
			
		}
		bfs_queue.pop();
	}
}
int main(void)
{
	scanf("%d %d",&m,&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&tomato[i][j]);
			after_tomato[i][j] = tomato[i][j];
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(tomato[i][j] == 1)
			{
				bfs_queue.push(pair<int,int>(i,j));
			}
		}
	}
	bfs();
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(after_tomato[i][j] == 0)
			{
				not_done = true;
				printf("-1\n");
				return 0;
			}
			else
			{
				if(ans < count[i][j])
				{
					ans = count[i][j];
				}
			}
		}
	}
	printf("%d\n",ans);
}