#include <stdio.h>
#include <algorithm>
#include <queue>

using namespace std;

int n,m,k;
int ans = 1005*1005;
int data[1005][1005];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool visited[15][1005][1005];

queue<pair<int, int> >que;
queue<pair<int, int> >que2;

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
		
		int wall = que2.front().first;
		int length = que2.front().second;
		if(x == n && y == m)
		{
			if(ans > length)
			{
				ans = length;
			}
		}
		
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true && visited[wall][new_x][new_y] == false)
			{
				if(wall < k)
				{
					if(data[new_x][new_y] == 1)
					{
						visited[wall][new_x][new_y] = true;
						que.push(pair<int, int>(new_x,new_y));
						que2.push(pair<int, int>(wall+1,length+1));	
					}
				}
				if(data[new_x][new_y] == 0)
				{
					visited[wall][new_x][new_y] = true;
					que.push(pair<int, int>(new_x,new_y));
					que2.push(pair<int, int>(wall,length+1));	
				}
			}		
		}
		que.pop();
		que2.pop();
	}
	
}
	

int main(void)
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%1d",&data[i][j]);
		}
	}
	
	visited[0][1][1] = true;
	que.push(pair<int, int>(1,1));
	que2.push(pair<int, int>(0,1));
	bfs();
	if(ans == 1005*1005)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",ans);
	}	
}