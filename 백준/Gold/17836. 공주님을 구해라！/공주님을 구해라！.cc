#include <stdio.h>
#include <stdbool.h>
#include <algorithm>
#include <queue>

using namespace std;

int n,m,limit;
int ans = 105 * 105;
int data[105][105];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

bool visited[2][105][105];
queue <pair <int, int>> que;
queue <pair <bool, int>> que2;

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
void bfs()
{
	while(!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;			
		
		bool sword = que2.front().first;
		int count = que2.front().second;
		
		if(ans < count || limit < count)
		{
			que.pop();
			que2.pop();
		}	
		else if(x == n && y == m)
		{
			if(ans > count)
			{
				ans = count;
			}
			que.pop();
			que2.pop();
		}
		else
		{
			for(int i=0; i<4; i++)
			{
				int new_x = x + dx[i];
				int new_y = y + dy[i];
				
				if(safe(new_x,new_y) == true && visited[sword][new_x][new_y] == false)
				{
					if(sword == true)
					{
						if(data[new_x][new_y] == 1)
						{
							visited[sword][new_x][new_y] = true;
							que.push(pair<int,int>(new_x,new_y));
							que2.push(pair<bool,int>(true,count+1));
						}
					}
					if(data[new_x][new_y] == 0)
					{
						visited[sword][new_x][new_y] = true;
						que.push(pair<int,int>(new_x,new_y));
						que2.push(pair<bool,int>(sword,count+1));
					}
					if(data[new_x][new_y] == 2)
					{
						visited[sword][new_x][new_y] = true;
						que.push(pair<int,int>(new_x,new_y));
						que2.push(pair<bool,int>(true,count+1));
					}					
				}
			}
			que.pop();
			que2.pop();
		}

	}
}

int main(void)
{
	scanf("%d %d %d",&n,&m,&limit);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);		
		}
	}
		
	que.push(pair<int,int>(1,1));
	que2.push(pair<bool,int>(false,0));
	visited[0][1][1] == true;
	visited[1][1][1] == true;
	bfs();
	if(ans <= limit)
	{
		printf("%d\n",ans);
	}
	else
	{
		printf("Fail\n");
	}
}