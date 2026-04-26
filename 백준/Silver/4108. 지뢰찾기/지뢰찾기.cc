#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
char ans[1005][1005]={0};
string data[1005];
int n,m;
int find(int x, int y)
{
	const int WAYS = 8;
	const int WAY[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
	int count = 0;
	
	for(int i=0; i<WAYS; i++)
	{
		int nx = x + WAY[i][0];
		int ny = y + WAY[i][1];
		if(nx >= 0 && nx < n && ny >= 0 && ny < m)
		{
			if(data[nx][ny] == '*')
				count++;
		}
	}
	return count;
}
int main(void)
{
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i=0; i<n; i++)
		{
			cin >> data[i];
		}
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(data[i][j] == '*')
				{
					ans[i][j] = '*';
				}
				else if(data[i][j] == '.')
				{
					ans[i][j] = '0';
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			int count = 0;
			for(int j=0; j<m; j++)
			{
				if(data[i][j] == '*')
				{
					continue;
				}
				else if(data[i][j] == '.')
				{
					count = find(i, j);	
					ans[i][j] = '0' + count;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				printf("%c",ans[i][j]);
			}
			printf("\n");
		}
	}
}