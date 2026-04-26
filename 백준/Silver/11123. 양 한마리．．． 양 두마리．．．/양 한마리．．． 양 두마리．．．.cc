#include <stdio.h>
#include <string.h>
int n,m;

int visited[105][105];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

char data[105][105];

bool safe(int x, int y)
{
	if(x < 0 && x >= n)
	{
		return false;
	}
	if(y < 0 && y >= m)
	{
		return false;
	}
	return true;
}
void dfs(int x, int y)
{
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if(safe(new_x,new_x) == true && data[new_x][new_y] == '#' && visited[new_x][new_y] == -1)
		{
			visited[new_x][new_y] = 0;
			dfs(new_x,new_y);		
		}
	}
		
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int cnt = 0;
		
		memset(data,0,sizeof(data));
		memset(visited,-1,sizeof(visited));
	
		scanf("%d %d",&n,&m);
		getchar();
		for(int i=0; i<n; i++)
		{
			scanf("%s",data[i]);
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(data[i][j] == '#' && visited[i][j] == -1)
				{
					cnt++;
					visited[i][j] = 0;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",cnt);
	}
}