#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
queue <int> que;
int n,t,g;
int bfs_run[100005];

int front_cut(int value)
{
	if(value >= 1 && value <= 9)
	{
		return 1;
	}
	else if(value >= 10 && value <= 99)
	{
		return 10;
	}
	else if(value >= 100 && value <= 999)
	{
		return 100;
	}
	else if(value >= 1000 && value <= 9999)
	{
		return 1000;
	}
	else if(value >= 10000 && value <= 99999)
	{
		return 10000;
	}
	return 0;
}
void bfs()
{
	queue <int> que;
	que.push(n);
	bfs_run[n] = 0;

	if(bfs_run[n] > t)
	{
		printf("ANG\n");
		return ;
	}
	if(n == g)
	{
		printf("%d\n",bfs_run[n]);
		return ;
	}
	while(!que.empty())
	{
		int n_value = que.front();
		que.pop();
		
		if(bfs_run[n_value] < t)
		{
			if(n_value + 1 <= 99999 && bfs_run[n_value+1] == -1)
			{
				if(n_value + 1 == g)
				{
					printf("%d\n",bfs_run[n_value] + 1);
					return ;
				}
				else if(bfs_run[n_value + 1] == -1)
				{
					que.push(n_value+1);
					bfs_run[n_value+1] = bfs_run[n_value] + 1;
				}
			}
			if(n_value * 2 <= 99999)
			
			{
				int temp_mod = front_cut(n_value * 2);
				if(n_value*2-temp_mod == g)
				{
					printf("%d\n",bfs_run[n_value] + 1);
					return ;
				}
				else if(bfs_run[n_value*2-temp_mod] == -1)
				{
					que.push(n_value*2-temp_mod);
					bfs_run[n_value*2-temp_mod] = bfs_run[n_value] + 1;		
				}
			}
		}
	}
	printf("ANG\n");
}
int main(void)
{
	scanf("%d %d %d",&n,&t,&g);
	memset(bfs_run,-1,sizeof(bfs_run));
	bfs();
}