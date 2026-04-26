#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int ans_max = 0;
int ans;
int n,m;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int data[10][10];
int data2[10][10];
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
	if(data2[x][y] == 1)
	{
		return ;
	}
	if(data2[x][y] == 0)
	{
		data2[x][y] = 2;
	}
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if(safe(new_x,new_y) == true && data2[new_x][new_y] == 0)
		{
			dfs(new_x,new_y);
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
			data2[i][j] = data[i][j];
		}
	}
	
	
	for(int w1_x=1; w1_x<=n; w1_x++)
	{
		for(int w1_y=1; w1_y<=m; w1_y++)
		{
			if(data[w1_x][w1_y] == 1 || data[w1_x][w1_y] == 2)
			{
				continue;
			}
			for(int w2_x=1; w2_x<=n; w2_x++)
			{
				for(int w2_y=1; w2_y<=m; w2_y++)
				{
					if(data[w2_x][w2_y] == 1 || data[w2_x][w2_y] == 2)
					{
						continue;
					}
					if(w1_x == w2_x && w1_y == w2_y)
					{
						continue;
					}
					for(int w3_x=1; w3_x<=n; w3_x++)
					{
						for(int w3_y=1; w3_y<=m; w3_y++)
						{
							if(data[w3_x][w3_y] == 1 || data[w3_x][w3_y] == 2)
							{
								continue;
							}							
							if(w1_x == w2_x && w1_y == w2_y)
							{
								continue;
							}
							if(w1_x == w3_x && w1_y == w3_y)
							{
								continue;
							}
							if(w2_x == w3_x && w2_y == w3_y)
							{
								continue;
							}
							for(int i=1; i<=n; i++)
							{
								for(int j=1; j<=m; j++)
								{
									data2[w1_x][w1_y] = 1;
									data2[w2_x][w2_y] = 1;
									data2[w3_x][w3_y] = 1;
									if(data2[i][j] == 2)
									{
										dfs(i,j);
									}
								}
							}
							
							int value = 0;
							for(int i=1; i<=n; i++)
							{
								for(int j=1; j<=m; j++)
								{
									if(data2[i][j] == 0)
									{
										value++;
									}
									if(ans_max < value)
									{
										ans_max = value;
									}	
									data2[i][j] = data[i][j];
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n",ans_max);
}