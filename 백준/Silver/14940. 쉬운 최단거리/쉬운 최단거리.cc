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
int start_x,start_y;
int data[1005][1005];
int moving[1005][1005];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
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
void bfs()
{
	queue <my_pair> que;
	que.push({start_x,start_y});
	
	while(!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		que.pop();
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];	
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] == 1 && moving[new_x][new_y] == -1)
			{
				que.push({new_x,new_y});
				moving[new_x][new_y] = moving[x][y] + 1;	
			}
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	memset(moving,-1,sizeof(moving));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&data[i][j]);
			if(data[i][j] == 2)
			{
				start_x = i;
				start_y = j;
			}
			if(data[i][j] == 0)
			{
				moving[i][j] = -2;
			}
		}
	}
	moving[start_x][start_y] = 0;
	bfs();
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(moving[i][j] == -2)
			{
				moving[i][j] = 0;
			}
			printf("%d ",moving[i][j]);
		}
		printf("\n");
	}

}