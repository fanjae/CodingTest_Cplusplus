#include <stdio.h>
#include <queue>

using namespace std;

queue <int> bfs_queue;
int ans_done = 0;
int count[1000005]={0};
int start, end;

void bfs(void)
{
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front();
		if(x > 100000)
		{
			bfs_queue.pop();
			continue;
		}
		if(x < 0)
		{
			bfs_queue.pop();
			continue;
		}

		if(count[x*2] == 0)
		{
			if(x*2 == x)
			{
				
			}
			else
			{
				bfs_queue.push(x*2);
				count[x*2] = count[x] + 1;
			}
		}
		if(count[x-1] == 0)
		{
			bfs_queue.push(x-1);
			count[x-1] = count[x] + 1;
		}
		if(count[x+1] == 0)
		{
			bfs_queue.push(x+1);
			count[x+1] = count[x] + 1;
		}
		bfs_queue.pop();	
	}
}

int main(void)
{
	scanf("%d %d",&start,&end);
	bfs_queue.push(start);
	
	if(start == end)
	{
		printf("%d",0);
		return 0;
	}
	bfs();
	printf("%d\n",count[end]);
}
	
	