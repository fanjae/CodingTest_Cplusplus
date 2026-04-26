#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

struct my_pair
{
	int x;
	int y;
};

int dx[6]={-2,-2,0,0,2,2};
int dy[6]={-1,1,-2,2,-1,1};
int moving[205][205]={0};
int n;
int r1,r2;
int c1,c2;


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
	queue <my_pair> que;
	que.push({r1,c1});
	
	while(!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		
		que.pop();
		if(x == r2 && y == c2)
		{
			printf("%d\n",moving[x][y]);
			return ;	
		}
		
		for(int i=0; i<6; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && moving[new_x][new_y] == -1)
			{
				moving[new_x][new_y] = moving[x][y] + 1;
				que.push({new_x,new_y});
			}
		}
	}
	printf("-1");	
}
int main(void)
{
	scanf("%d",&n);
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	memset(moving,-1,sizeof(moving));
	
	moving[r1][c1] = 0; 
	bfs();
}