#include <stdio.h>

char data[255][255];
bool visited[255][255]={0};
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};


int n,m;
int sheep_count = 0;
int wolf_count = 0;
int sheep_sum = 0;
int wolf_sum = 0;
bool safe(int x, int y)
{
	if(x <= 0 || x >= n)
	{
		return false;
	}
	if(y <= 0 || y >= m)
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
		
		if(safe(new_x,new_y) == true && (data[new_x][new_y] == '.' || data[new_x][new_y] == 'v' || data[new_x][new_y] == 'k') && visited[new_x][new_y] == false)
		{
			visited[new_x][new_y] = true;
			if(data[new_x][new_y] == 'v')
			{
				wolf_count++;
			}
			else if(data[new_x][new_y] == 'k')
			{
				sheep_count++;
			}
			dfs(new_x,new_y);			
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	getchar();
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m+1; j++)
		{
			scanf("%c",&data[i][j]);
			if(data[i][j] == '\n')
			{
				data[i][j] = 0;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if((data[i][j] == '.' || data[i][j] == 'v' || data[i][j] == 'k') && (visited[i][j] == false))
			{
				visited[i][j] = true;
				if(data[i][j] == 'v')
				{
					wolf_count++;
				}
				else if(data[i][j] == 'k')
				{
					sheep_count++;
				}
				dfs(i,j);
				
				if(sheep_count > wolf_count)
				{
					wolf_count = 0;
				}
				else if(sheep_count <= wolf_count)
				{
					sheep_count = 0;
				}
				sheep_sum += sheep_count;
				wolf_sum += wolf_count;
				
				sheep_count = 0;
				wolf_count = 0;
			}
		}
	}
	printf("%d %d\n",sheep_sum,wolf_sum);
}