#include <stdio.h>
#include <stdbool.h>
int data[505][505];
bool visited[505][505];

int dx[8]={-1,-1,1,1,1,-1,0,0};
int dy[8]={-1,1,-1,1,0,0,1,-1};
int n,m;
int max_value=0;
int cnt = 0;

bool safe(int x, int y)
{
	if(x < 0 || x >= n)
	{
		return false;
	}
	if(y < 0 || y >= m)
	{
		return false;
	}
	return true;
}
void dfs(int x, int y)
{
	for(int i=0; i<8; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];	
		
		if(safe(new_x,new_y) == true && data[new_x][new_y] == 1 && visited[new_x][new_y] == false)
		{
			visited[new_x][new_y] = true;
			dfs(new_x,new_y);		
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(data[i][j] == 1 && visited[i][j] == false)
			{
				visited[i][j] = true;
				cnt++;
				dfs(i,j);
			}
		}
	}
	printf("%d\n",cnt);
}