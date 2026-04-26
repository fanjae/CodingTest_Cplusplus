#include <stdio.h>
#include <string.h>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

vector <pair<int, int> > wolf_vec;
queue <pair<int, int> > que;
int bfs_moving[505][505]={0};
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int r,c;

char data[505][505];

bool safe(int x, int y)
{
	if(x < 0 || x >= r)
	{
		return false;
	}
	if(y < 0 || y >= c)
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
		que.pop();
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && data[new_x][new_y] != 'W')
			{
				if(bfs_moving[new_x][new_y] == -1 || bfs_moving[new_x][new_y] > bfs_moving[x][y] + 1)
				{
					que.push(make_pair(new_x,new_y));
					bfs_moving[new_x][new_y] = bfs_moving[x][y] + 1;
				}
			}
		}
	}
}
int main(void)
{

	scanf("%d %d",&r,&c);
	getchar();
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c+1; j++)
		{
			scanf("%c",&data[i][j]);
			if(data[i][j] == '\n')
			{
				data[i][j] = 0;
			}
		}
	}
	memset(bfs_moving,-1,sizeof(bfs_moving));
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(data[i][j] == 'W')
			{
				wolf_vec.push_back(make_pair(i,j));
				que.push(make_pair(i,j));
				bfs_moving[i][j] = 0;
			}
		}
	}
	if(wolf_vec.size() == 0)
	{
		printf("1\n");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				printf("%c",data[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		bfs();
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				if(bfs_moving[i][j] == 1 && data[i][j] == 'S')
				{
					printf("0\n");
					return 0;
				}
			}
		}
		printf("1\n");
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				if(bfs_moving[i][j] == 1 && data[i][j] == '.')
				{
					printf("D");
				}
				else
				{
					printf("%c",data[i][j]);
				}
			}
			printf("\n");
		}
	}
}