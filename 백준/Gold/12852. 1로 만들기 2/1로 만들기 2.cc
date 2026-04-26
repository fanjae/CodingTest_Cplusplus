#include <stdio.h>
#include <string.h>
#include <stack>
#include <queue>

using namespace std;

int x[1000005];
stack <int> path_stk;
int path[1000005];
int n;

void bfs()
{
	queue <int> que;
	que.push(n);
	x[n] = 0;
	
	while(!que.empty())
	{
		int x_value = que.front();
		que.pop();
		
		if(x_value == 1)
		{
			printf("%d\n",x[x_value]);
			if(n == 1)
			{
				printf("1");
			}
			else
			{
				path_stk.push(1);
				int target = path[1];
				while(target != n)
				{
					path_stk.push(target);
					target = path[target];
				}
				path_stk.push(n);
				
				while(!path_stk.empty())
				{
					printf("%d ",path_stk.top());
					path_stk.pop();
				}
			}
			return ;	
		}
		if(x_value % 3 == 0 && x[x_value / 3] == -1)
		{
			x[x_value / 3] = x[x_value] + 1;
			path[x_value / 3] = x_value;
			que.push(x_value / 3);
		}
		if(x_value % 2 == 0 && x[x_value / 2] == -1)
		{
			x[x_value / 2] = x[x_value] + 1;
			path[x_value / 2] = x_value;
			que.push(x_value / 2);			
		}
		if(x[x_value - 1] == -1)
		{
			x[x_value - 1] = x[x_value] + 1;
			path[x_value - 1] = x_value;
			que.push(x_value - 1);					
		}
	}
}
int main(void)
{
	scanf("%d",&n);
	memset(x,-1,sizeof(x));	
	bfs();
}
	