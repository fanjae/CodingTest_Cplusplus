#include <stdio.h>
#include <queue>
#include <string.h>

using namespace std;
struct my_pair
{
	int x;
	int y;
};
int n,m;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int bfs_moving[55][55];
int ans_max;
int bfs_max;
char data[55][55];

bool safe(int x, int y)
{
	if(x < 0 || x >= n)
	{
		return false;
	}
	if(y < 0 || y >= m)
	{
		return false;
	}
	return true;
}
void bfs(int x, int y)
{
	queue <my_pair> que;
	que.push({x,y});
	
	while(!que.empty())
	{
		x = que.front().x;
		y = que.front().y;
		que.pop();
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] == 'L' && bfs_moving[new_x][new_y] == -1)
			{
				bfs_moving[new_x][new_y] = bfs_moving[x][y] + 1;
				if(bfs_moving[new_x][new_y] > bfs_max)
				{
					bfs_max = bfs_moving[new_x][new_y];
				}	
				que.push({new_x,new_y});
			}
		}
	}
	return ;
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%s",data[i]);
	}
	
	memset(bfs_moving,-1,sizeof(bfs_moving));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(data[i][j] == 'L')
			{
				bfs_moving[i][j] = 0;
				bfs(i,j);
				
				if(ans_max < bfs_max)
				{
					ans_max = bfs_max;
				}
				memset(bfs_moving,-1,sizeof(bfs_moving));
				bfs_max = 0;
			}
		}
	}
	printf("%d\n",ans_max);
}