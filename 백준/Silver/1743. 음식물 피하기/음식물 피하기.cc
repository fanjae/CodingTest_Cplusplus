#include <stdio.h>
#include <stdbool.h>
int data[105][105];
int n,m;
int k;
int ans = 0;
int count = 0;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
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
void dfs(int x, int y)
{
	data[x][y] = 0;
	count++;
		
	for(int i=0; i<4; i++)
	{
		int new_x,new_y;
		new_x = x + dx[i];
		new_y = y + dy[i]; 
		
		if(safe(new_x,new_y) == true && data[new_x][new_y] == 1)
		{
			dfs(new_x,new_y);
		}
	}
}
int main(void)
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1; i<=k; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		data[x][y] = 1;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			count = 0;
			if(data[i][j] == 1)
			{
				dfs(i,j);
			}
			if(count > ans)
			{
				ans = count;
			}
		}
	}
	printf("%d\n",ans);
}