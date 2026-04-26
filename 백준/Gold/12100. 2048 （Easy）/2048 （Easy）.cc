#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<vector <int>> vec;
int n;
int answer = 0;
int before[25][25];
vec data;

vec move(vec data, int type)
{
	if(type == 1) // up
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-1; j++)
			{
				for(int k=j+1; k<n; k++)
				{
					if(data[j][i] != 0 && data[j][i] == data[k][i]) 
					{
						data[j][i] += data[k][i];
						answer = max(answer,data[j][i]);
						data[k][i] = 0;
						break;
					}
					else if(data[j][i] == 0)
					{
						data[j][i] = data[k][i];
						data[k][i] = 0;
						continue;
					}
					else if(data[k][i] != 0)
					{
						break;
					}
				}

			}
		}
	}
	if(type == 2) // down
	{
		for(int i=0; i<n; i++)
		{
			for(int j=n-1; j>=1; j--)
			{
				for(int k=j-1; k>=0; k--)
				{
					if(data[j][i] != 0 && data[j][i] == data[k][i])
					{
						data[j][i] += data[k][i];
						answer = max(answer,data[j][i]);
						data[k][i] = 0;
						break;
					}
					else if(data[j][i] == 0)
					{
						data[j][i] = data[k][i];
						data[k][i] = 0;
						continue;
					}	
					else if(data[k][i] != 0)
					{
						break;
					}
				}

			}
		}
	}
	if(type == 3) // left
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-1; j++)
			{
				for(int k=j+1; k<n; k++)
				{
					if(data[i][j] != 0 && data[i][j] == data[i][k])
					{
						data[i][j] += data[i][k];
						answer = max(answer,data[i][j]);
						data[i][k] = 0;
						break;
					}
					else if(data[i][j] == 0)
					{
						data[i][j] = data[i][k];
						data[i][k] = 0;
						continue;
					}
					else if(data[i][k] != 0)
					{
						break;
					}
				}
			}
		}
	}
	if(type == 4) // right
	{
		for(int i=0; i<n; i++)
		{
			for(int j=n-1; j>=1; j--)
			{
				for(int k=j-1; k>=0; k--)
				{
					if(data[i][j] != 0 && data[i][j] == data[i][k])
					{
						data[i][j] += data[i][k];
						answer = max(answer,data[i][j]);
						data[i][k] = 0;
						break;
					}
					else if(data[i][j] == 0)
					{
						data[i][j] = data[i][k];
						data[i][k] = 0;
						continue;
					}
					else if(data[i][k] != 0)
					{
						break;
					}
				}
			}
		}
	}	
	

	return data;
}
void solve(vec data, int cnt)
{
	if(cnt == 5)
	{
		return ;
	}
	for(int i=1; i<=4; i++)
	{
		solve(move(data,i),cnt+1);
	}
}
int main(void)
{
	scanf("%d",&n);
	int value_temp;
	for(int i=0; i<n; i++)
	{
		vector<int> temp;
		for(int j=0; j<n; j++)
		{
			scanf("%d",&value_temp);
			temp.push_back(value_temp);
			
			answer = max(answer,value_temp);
		}
		data.push_back(temp);
	}
	solve(data,0);
	printf("%d\n",answer);
}
	