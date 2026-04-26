#include <stdio.h>
#include <stdbool.h>
#include <queue>
#include <utility>

using namespace std;
int n;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int data[105][105];
bool visited[105][105]={0};
bool visited2[105][105]={0};

bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	else if(y <= 0 || y > n)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void bfs(int j, int k)
{
	queue <pair <int, int> > bfs_queue;
	bfs_queue.push(make_pair(j,k));
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front().first;
		int y = bfs_queue.front().second;
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && visited2[new_x][new_y] == false)
			{
				visited2[new_x][new_y] = true;
				bfs_queue.push(make_pair(new_x,new_y));
			}	
		}
		bfs_queue.pop();
	}
}
int main(void)
{
	int ans=0;
	int max=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1;j<=n; j++)
		{
			scanf("%d",&data[i][j]);
			if(max < data[i][j])
			{
				max = data[i][j];
			}
		}
	}
	
	for(int i=0; i<=max; i++)
	{
		int count = 0;
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				if(data[j][k] <= i && visited[j][k] == false)
				{
					visited[j][k] = true;
					visited2[j][k] = true;
				}
				
			}
		}
		
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				if(visited2[j][k] == false)
				{	
					visited2[j][k] = true;
					count++;
					bfs(j,k);
				}
			}
		}
		if(ans < count)
		{
			ans = count;
		}
		
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				visited[j][k] = false;
				visited2[j][k] = false;
			}
		}
	}	
	printf("%d\n",ans);		
}