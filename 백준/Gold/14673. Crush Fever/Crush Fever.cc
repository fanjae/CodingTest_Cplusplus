#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int m,n,a[9][9];
bool visited[9][9];
bool safe(int x, int y)
{
	if(x < 0 || y < 0 || x >= n || y >= m)
	{
		return false;
	}
	return true;
}
void back()
{
	for(int k=0; k<n-1; k++)
	{
		for(int i=n-2; i>=0; i--)
		{
			for(int j=0; j<m; j++)
			{
				if(a[i][j] && a[i+1][j] == 0){
					a[i+1][j] = a[i][j];
					a[i][j] = 0;
				}
			}
		}
	}
}

int dfs(int x, int y, int val)
{
	int value = 1;
	visited[x][y] = true;
	a[x][y] = 0;
	for(int i = 0; i < 4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		if(safe(new_x,new_y) == false)
		{
			continue;
		}
		if(visited[new_x][new_y] == true)
		{
			continue;
		}
		if(val == a[new_x][new_y])
		{
			value += dfs(new_x, new_y, val);
		}
	}
	return value;
}

int func(int cnt)
{
	if(cnt == 0)
	{
		return 0;
	
	}
	int temp[9][9];
	int result = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			temp[i][j] = a[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] > 0)
			{
				memset(visited, false, sizeof(visited));
				int val = dfs(i, j, a[i][j]);
				back();
				result = max(result, val * val + func(cnt - 1));
				for(int k=0; k<n; k++)
				{
					for(int l=0; l<m; l++)
					{
						a[k][l] = temp[k][l];
					}
				}
			}
		}
	}
	return result;
}

int main() 
{
	scanf("%d %d", &m, &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d\n", func(3));
	return 0;
}
