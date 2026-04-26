#include <stdio.h>
#include <queue>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <algorithm>

using namespace std;

bool visited[305][305];

int n;
int dx[8]={-1,-2,-2,-1,1,2,2,1};
int dy[8]={-2,-1,1,2,-2,-1,1,2};
int ans_x, ans_y;
int ans_min = INT_MAX;
queue <pair <int, int> > que;
queue <int> count_que;

bool safe(int x, int y)
{
	if(x < 0 || x >= n)
	{
		return false;
	}
	if(y < 0 || y >= n)
	{
		return false;
	}
	return true;
}
void bfs()
{
	while(!que.empty())
	{
		
		int x = que.front().first;
		int y = que.front().second;
		int cur_count = count_que.front();
		if(cur_count > ans_min)
		{
			que.pop();
			count_que.pop();
			return ;
		}
		if(x == ans_x && y == ans_y)
		{
			if(cur_count < ans_min)
			{
				ans_min = cur_count;
				que.pop();
				count_que.pop();
				return ;
			}
		}
		
		for(int i=0; i<8; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && visited[new_x][new_y] == false) 
			{
				que.push( pair<int,int> (new_x,new_y));
				count_que.push(cur_count+1);	
				visited[new_x][new_y] = true;
			}
			
		}
		que.pop();
		count_que.pop();
	}
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int start_x,start_y;
		int cur_count = 0;
		ans_min = INT_MAX;
		scanf("%d",&n);
		
		scanf("%d %d",&start_x,&start_y);
		scanf("%d %d",&ans_x,&ans_y);
		
		memset(visited,false,sizeof(bool) * 305 * 305);
		
		if(start_x == ans_x && start_y == ans_y)
		{
			ans_min = 0;
		}
		else
		{
			que.push( pair<int,int> (start_x,start_y));
			count_que.push(cur_count);
			visited[start_x][start_y] = true;
			bfs();
		}
		printf("%d\n",ans_min);
		while(!que.empty())
		{
			que.pop();
		}
		while(!count_que.empty())
		{
			count_que.pop();
		}
	}
}