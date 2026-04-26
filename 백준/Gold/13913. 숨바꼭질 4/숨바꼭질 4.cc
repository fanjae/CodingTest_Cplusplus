/* 
https://www.acmicpc.net
Problem ID : 13913
BFS(Breadth first search)
*/

#include <stdio.h>
#include <cstring>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int start_point,end_point;
int moving[100005]; // 도달하는데 걸린 시간 
int path[100005];
stack <int> path_stk;

bool safe(int x) // 좌표 범위 초과여부 확인 함수 
{
	if(x < 0 || x > 100000)
	{
		return false;
	}
	return true;
}
void bfs()
{
	queue <int> que;
	que.push(start_point);
	moving[start_point] = 0;
	path[start_point] = start_point;
	while(!que.empty())
	{
		int point = que.front();
		que.pop();
		
		if(point == end_point)
		{
			int x = point;
			path_stk.push(x);
				
			if(start_point != end_point)
			{
				while(path[x] != start_point)
				{
					path_stk.push(path[x]);
					x = path[x];	
				}
				path_stk.push(start_point);	
			}
			
			printf("%d\n",moving[point]);
			while(!path_stk.empty())
			{
				printf("%d ",path_stk.top());
				path_stk.pop();
			}
			return ;
		}

		if(safe(point-1) == true && moving[point-1] == -1)
		{
			que.push(point-1);
			moving[point-1] = moving[point] + 1;
			path[point-1] = point;
		}	
		if(safe(point+1) == true && moving[point+1] == -1)
		{
			que.push(point+1);
			moving[point+1] = moving[point] + 1;
			path[point+1] = point;
		}				
		if(safe(point*2) == true && moving[point*2] == -1)
		{
			que.push(point*2);
			moving[point*2] = moving[point] + 1;
			path[point*2] = point;
		}
	}
}
int main(void)
{
	scanf("%d %d",&start_point,&end_point);
	memset(moving,-1,sizeof(moving));
	bfs();
}
	