#include <stdio.h>
#include <stdbool.h>
#include <utility>
#include <queue>

using namespace std;
int n,m;
int min_count[105][105]={0};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
bool node[105][105]={0};

queue <pair<int,int> > bfs_queue;
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
	else
	{
		return true;
	}
}
void bfs(int x, int y)
{
	while(bfs_queue.empty() == false)
	{
		int new_x=0;
		int new_y=0;
		x = bfs_queue.front().first;
		y = bfs_queue.front().second;
		for(int i=0; i<4; i++)
		{
			new_x = x + dx[i];
			new_y = y + dy[i];
			if(safe(new_x,new_y) == true && node[new_x][new_y] == true && min_count[new_x][new_y] == 0)
			{
				bfs_queue.push(pair<int,int>(new_x,new_y));
				min_count[new_x][new_y] = min_count[x][y] + 1;
			}	
		}
		bfs_queue.pop();
	}
}

int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%1d",&node[i][j]);
		}
	}
	bfs_queue.push(pair<int,int>(1,1));
	min_count[1][1] = 1;
	bfs(1,1);
	
	printf("%d\n",min_count[n][m]);
}