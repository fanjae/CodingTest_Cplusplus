#include <stdio.h>
bool node[35][35]={0};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int count[500]={0};
int n;
int index=0;
bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	else if(y <= 0 || y > n)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
void dfs(int x, int y)
{
	node[x][y] = false;
	for(int i=0; i<4; i++)
	{
		int new_x = x+dx[i];
		int new_y = y+dy[i];
		
		if((safe(new_x,new_y) == true) && node[new_x][new_y] == true)
		{
			count[index]++;
			dfs(new_x,new_y);
		}
	}
}
int main(void)
{
	int i,j;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%1d",&node[i][j]);
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(node[i][j] == true)
			{
				index++;
				count[index]++;
				dfs(i,j);
			}
		}
	}
	printf("%d\n",index);
	for(int i=1; i<=index; i++)
	{
		for(int j=1; j<=index; j++)
		{
			if(count[i] <= count[j])
			{
				int temp;
				temp = count[i];
				count[i] = count[j];
				count[j] = temp;
			}
		}
	}
	for(int i=1; i<=index; i++)
	{
		printf("%d\n",count[i]);
	}
}