#include <stdio.h>
#include <queue>

using namespace std;

int floor_count[1000005];
int floor;
int start,end;
int up;
int down;

void bfs()
{
	queue <int> bfs_queue;
	bfs_queue.push(start);
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front();
		if(x == end)
		{
			printf("%d\n",floor_count[end]);
			return ;
		}
		else if(x <= 0 && x > floor)
		{
			bfs_queue.pop();
			continue;
		}
		if(x + up <= floor && floor_count[x+up] == 0 && x + up != x)
		{
			bfs_queue.push(x+up);
			floor_count[x+up] = floor_count[x] + 1;
		}
		if(x - down >= 1 && floor_count[x-down] == 0 && x - down != x)
		{
			bfs_queue.push(x-down);
			floor_count[x-down] = floor_count[x] + 1;
		}
		bfs_queue.pop();
	}
	printf("use the stairs\n");
}
int main(void)
{	
	scanf("%d %d %d %d %d",&floor,&start,&end,&up,&down);
	if(start == end)
	{
		printf("0");
		return 0;
	}
	bfs();
}
	