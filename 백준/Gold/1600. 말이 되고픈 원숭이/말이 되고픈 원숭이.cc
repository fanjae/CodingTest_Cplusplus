#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

struct my_set
{
	int x;
	int y;
	int horse_count;
};

int moving[35][205][205];
int data[205][205];

int k;
int k_dx[8]={-1,-2,-2,-1,1,2,2,1};
int k_dy[8]={-2,-1,1,2,-2,-1,1,2};

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int w,h;

bool safe(int x, int y)
{
	if(x <= 0 || x > h)
	{
		return false;
	}
	if(y <= 0 || y > w)
	{
		return false;
	}
	return true;
}
void bfs()
{
	queue <my_set> que;
	que.push({1,1,0});

	while(!que.empty())
	{
		int x = que.front().x;
		int y = que.front().y;
		int horse_count = que.front().horse_count;
		que.pop();
		
		if(x == h && y == w)
		{
			printf("%d\n",moving[horse_count][x][y]);
			return ;
		}
		
		int new_x, new_y;
		if(horse_count < k)
		{
			for(int i=0; i<8; i++)
			{
				new_x = x + k_dx[i];
				new_y = y + k_dy[i];
				if(safe(new_x,new_y) == true && data[new_x][new_y] == 0 && moving[horse_count+1][new_x][new_y] == -1)
				{
					moving[horse_count+1][new_x][new_y] = moving[horse_count][x][y] + 1;
					que.push({new_x,new_y,horse_count+1});
				}
			}
		}
		for(int i=0; i<4; i++)
		{
			new_x = x + dx[i];
			new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] == 0 && moving[horse_count][new_x][new_y] == -1)
			{
				moving[horse_count][new_x][new_y] = moving[horse_count][x][y] + 1;
				que.push({new_x,new_y,horse_count});
			}
		}
	}
	printf("-1\n");
}
int main(void)
{
	scanf("%d",&k);
	scanf("%d %d",&w,&h);
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=w; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	
	memset(moving,-1,sizeof(moving));
	moving[0][1][1] = 0;
	bfs();
}