/* 
https://www.acmicpc.net
Problem ID : 12851
BFS(Breadth first search)
*/

#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;
int moving[100005];
int n,k;
int ans_time = 0;
int ans_count = 0;
int safe(int x)
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
	que.push(n);
	
	while(!que.empty())
	{
		int point = que.front();
		que.pop();
		
		if(ans_time != 0 && ans_time < moving[point])
		{
			printf("%d\n%d\n",ans_time,ans_count);
			return ;
		}
		
		if(point == k)
		{
			ans_time = moving[point];
			ans_count++;
		}
		
		if(safe(point+1) == true && (moving[point+1] == -1 || moving[point+1] >= moving[point] + 1))
		{
			que.push(point+1);
			moving[point+1] = moving[point] + 1;
		}
		if(safe(point-1) == true && (moving[point-1] == -1 || moving[point-1] >= moving[point] + 1))
		{
			que.push(point-1);
			moving[point-1] = moving[point] + 1;
		}
		if(safe(point*2) == true && (moving[point*2] == -1 || moving[point*2] >= moving[point] + 1))
		{
			que.push(point*2);
			moving[point*2] = moving[point] + 1;	
		}
	}
	printf("%d\n%d\n",ans_time,ans_count);
	return ;	
}
int main(void)
{
	scanf("%d %d",&n,&k);
	memset(moving,-1,sizeof(moving));
	moving[n] = 0;
	bfs();
}