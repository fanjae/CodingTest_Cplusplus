#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>

using namespace std; 

struct my_pair
{
	int clipboard;
	int count;
};

int moving[1005][1005];
int start_point=1,end_point;

void bfs()
{
	queue <my_pair> que;
	que.push({0,1});
	moving[0][1] = 0;
	
	while(!que.empty())
	{
		int clip = que.front().clipboard;
		int count = que.front().count;
		
		if(count == end_point)
		{
			printf("%d\n",moving[clip][count]);
			return ;
		}
		que.pop();
		
		if(count != 0 && moving[count][count] == -1)
		{
			moving[count][count] = moving[clip][count] + 1;
			que.push({count,count});
		}
		if(clip != 0 && count + clip <= 1000 && moving[clip][count+clip] == -1)
		{
			moving[clip][count+clip] = moving[clip][count] + 1;
			que.push({clip,clip+count});
		}
		if(count - 1 >= 0 && moving[clip][count-1] == -1)
		{
			moving[clip][count-1] = moving[clip][count] + 1;
			que.push({clip,count-1});
		}
	
	}
}
int main(void)
{
	scanf("%d",&end_point);
	memset(moving,-1,sizeof(moving));
	
	bfs();
}