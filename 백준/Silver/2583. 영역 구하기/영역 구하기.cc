#include <stdio.h>
#include <stdbool.h>
#include <algorithm>
#include <queue>

using namespace std;
int m,n;
bool data[105][105]={0};
bool visited[105][105]={0};
int ans[10005]={0};
int ans_count = 0;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
queue <pair <int, int> > bfs_queue;
bool safe(int x, int y)
{
	if(x < 0 || y < 0)
	{
		return false;
	}
	else if(x >= m || y >= n)
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
	int count = 1;
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front().first;
		int y = bfs_queue.front().second;
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] == false && visited[new_x][new_y] == false)
			{
				ans[ans_count]++;
				visited[new_x][new_y] = true;
				bfs_queue.push(make_pair(new_x,new_y));					
			}
		}
		bfs_queue.pop();
	}
}
int main(void)
{
	int k;
	scanf("%d %d %d",&m,&n,&k);
	for(int i=0; i<k; i++)
	{
		int x1,y1,x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		
		for(int j=y1; j<y2; j++)
		{
			for(int k=x1; k<x2; k++)
			{
				data[j][k] = true;
			}
		}
	}
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(data[i][j] == false && visited[i][j] == false)
			{
				ans[ans_count]++;
				visited[i][j] = true;
				bfs_queue.push(make_pair(i,j));
				bfs();
				ans_count++;
			}
		}
	}
	
	printf("%d\n",ans_count);
	sort(ans,ans+ans_count);
	for(int i=0; i<ans_count; i++)
	{
		printf("%d ",ans[i]);
	}
}