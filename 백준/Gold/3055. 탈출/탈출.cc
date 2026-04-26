#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> water_point;

char data[55][55];

int n,m;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int water_moving[55][55]={0};
int mole_moving[55][55]={0};
int start_mole_x, start_mole_y;

bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	if(y <= 0 || y > m)
	{
		return false;
	}
	return true;
}
void water_bfs()
{
	queue<pair<int, int>> que;
	for(int i=0; i<water_point.size(); i++)
	{
		que.push(make_pair(water_point[i].first,water_point[i].second));
		water_moving[water_point[i].first][water_point[i].second] = 0;
	}
	
	while(!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;	
		que.pop();
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && water_moving[new_x][new_y] == -1 && (data[new_x][new_y] != 'D' && data[new_x][new_y] != 'X'))
			{
				water_moving[new_x][new_y] = water_moving[x][y] + 1;
				que.push(make_pair(new_x,new_y));
			}
		}	
	}
}
void mole_bfs()
{
	queue<pair<int, int>> que;
	que.push(make_pair(start_mole_x,start_mole_y));
	mole_moving[start_mole_x][start_mole_y] = 0;
	
	while(!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;	
		que.pop();
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(data[new_x][new_y] == 'D')
			{
				printf("%d\n",mole_moving[x][y] + 1);
				return ;
			}
			if(safe(new_x,new_y) == true && mole_moving[new_x][new_y] == -1 && data[new_x][new_y] == '.' && (water_moving[new_x][new_y] == -1 || water_moving[new_x][new_y] > mole_moving[x][y] + 1))
			{
				mole_moving[new_x][new_y] = mole_moving[x][y] + 1;
				que.push(make_pair(new_x,new_y));
			}
		}	
	}
	printf("KAKTUS\n");
}
int main(void)
{
	scanf("%d %d",&n,&m);
	getchar();
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m+1; j++)
		{
			scanf("%1c",&data[i][j]);
			if(data[i][j] == 'S')
			{
				start_mole_x = i;
				start_mole_y = j;	
			}
			else if(data[i][j] == '*')
			{
				water_point.push_back(make_pair(i,j));
			}
			else if(data[i][j] == '\n')
			{
				data[i][j] = 0;
			}
		}
	}
	
	memset(water_moving,-1,sizeof(water_moving));
	memset(mole_moving,-1,sizeof(mole_moving));
	
	water_bfs();
	mole_bfs();
}