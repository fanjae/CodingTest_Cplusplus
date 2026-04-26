#include <stdio.h>
char data[105][105];
bool visited[105][105];
bool visited2[105][105];
int n;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int ans = 0;
int ans2 = 0;
bool safe(int x, int y)
{
	if(x < 0 || x == n)
	{
		return false;
	}
	if(y < 0 || y == n)
	{
		return false;
	}
	return true;
}
void dfs(int x, int y, char last, int type)
{
	if(type == 0)
	{
		visited[x][y] = true;
	}
	else
	{
		visited2[x][y] = true;
	}
	
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if(type == 0)
		{
			if(visited[new_x][new_y] == false && data[new_x][new_y] == last)
			{
				dfs(new_x,new_y,last,0);
			}
		}
		else if(type == 1)
		{
			if(visited2[new_x][new_y] == false)
			{
				if(last == 'R' || last == 'G')
				{
					if(data[new_x][new_y] == 'R' || data[new_x][new_y] == 'G')
					{	
						dfs(new_x,new_y,last,1);
					}
				}
				else
				{
					if(data[new_x][new_y] == last)
					{
						dfs(new_x,new_y,last,1);
					}
				}
			}
		}
	}
}
int main(void)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s",data[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(visited[i][j] == false)
			{
				ans++;
				dfs(i,j,data[i][j],0);			
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(visited2[i][j] == false)
			{
				ans2++;
				dfs(i,j,data[i][j],1);			
			}
		}
	}	
	
	printf("%d %d\n",ans,ans2);
}