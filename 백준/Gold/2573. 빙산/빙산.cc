#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <queue>
#include <utility>

using namespace std;
int n,m;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int data[305][305];
int data2[305][305];
bool visited[305][305]={0};

queue <pair <int, int> > bfs_queue;
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
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] != 0 && visited[new_x][new_y] == false)
			{
					visited[new_x][new_y] = true;
					bfs_queue.push(make_pair(new_x,new_y));
			}
		}
		
		bfs_queue.pop();
	}
}
int main(void)
{
	int day = 0;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	
	while(1)
	{
		int count = 0;
		int sum = 0;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				sum += data[i][j];
				data2[i][j] = data[i][j];
				visited[i][j] = false;
			}
		}
			
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				if(data[i][j] != 0 && visited[i][j] == false)
				{
					count++;
					visited[i][j] = true;
					bfs_queue.push(make_pair(i,j));
					bfs();
				}
			}
		}
		if(sum == 0)
		{
			printf("0");
			return 0;
		}
		else if(count > 1)
		{
			printf("%d\n",day);
			return 0;
		}
		day++;		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				for(int k=0; k<4; k++)
				{
					int x = i;
					int y = j;
					int new_x = i + dx[k];
					int new_y = j + dy[k];
					
					if(safe(new_x,new_y) == true && data2[new_x][new_y] == 0 && data2[x][y] > 0)
					{
						if(data[x][y] != 0)
							data[x][y]--;
					}
				}
			}
		}
	}
}