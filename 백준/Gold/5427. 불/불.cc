#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;

char data[1005][1005];
int fire_moving[1005][1005];
int user_moving[1005][1005];

int start_x, start_y;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m;



bool fire_safe(int x, int y)
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
void fire_bfs()
{
	queue<pair<int, int>> fire_que;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(data[i][j] == '*')
			{
				fire_que.push(make_pair(i,j));
				fire_moving[i][j] = 0;
			}
		}
	}
	
	while(!fire_que.empty())
	{
		int target_x = fire_que.front().first;
		int target_y = fire_que.front().second;
		
		fire_que.pop();
		for(int i=0; i<4; i++)
		{
			int new_x = target_x + dx[i];
			int new_y = target_y + dy[i];
		
			if(fire_safe(new_x,new_y) == true && fire_moving[new_x][new_y] == -1 && (data[new_x][new_y] != '#'))
			{
				fire_moving[new_x][new_y] = fire_moving[target_x][target_y] + 1;
				fire_que.push(make_pair(new_x,new_y));	
			}
		}
	}
}
void user_bfs()
{
	queue<pair<int, int>> user_que;

	user_que.push(make_pair(start_x,start_y));
	user_moving[start_x][start_y] = 0;

	while(!user_que.empty())
	{
		int target_x = user_que.front().first;
		int target_y = user_que.front().second;
		user_que.pop();	
					
		for(int i=0; i<4; i++)
		{
			int new_x = target_x + dx[i];
			int new_y = target_y + dy[i];
			if(new_x <= 0 || new_x > n || new_y <= 0 || new_y > m)
			{
				printf("%d\n",user_moving[target_x][target_y] + 1);
				return ;
			}
			if((data[new_x][new_y] == '.' && user_moving[new_x][new_y] == -1) && (fire_moving[new_x][new_y] == -1 || fire_moving[new_x][new_y] > user_moving[target_x][target_y]+1))
			{
				user_moving[new_x][new_y] = user_moving[target_x][target_y] + 1;
				user_que.push(make_pair(new_x,new_y));
			}
		}
	}
	printf("IMPOSSIBLE\n");
}
int main(void)
{
	int T;
	//freopen("F.in","r",stdin);
	scanf("%d",&T);
	while(T--)
	{	
		memset(fire_moving,-1,sizeof(fire_moving));
		memset(user_moving,-1,sizeof(user_moving));
		memset(data,0,sizeof(data));
		
		scanf("%d %d",&m,&n);
		getchar();
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m+1; j++)
			{
				scanf("%1c",&data[i][j]);
				if(data[i][j] == '\n')
				{
					data[i][j] = 0;
				}
				if(data[i][j] == '@')
				{
					start_x = i;
					start_y = j;
				}
			}
		}
		
		fire_bfs();	
		user_bfs();	

	}
}