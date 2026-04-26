#include <algorithm>
#include <stdio.h>
using namespace std;

const int x_pos[2]={0,1};
const int y_pos[2]={1,0};

int n;
int answer;
char data[55][55];
int find(void)
{
	int max_ans=1;
	int count=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(data[i][j] == data[i][j+1])
			{
				count++;
			}
			else
			{
				max_ans = max(max_ans,count);
				count=1;
			}
		}
		max_ans = max(max_ans,count);
		count=1;
		for(int j=0; j<n-1; j++)
		{
			if(data[j][i] == data[j+1][i])
			{
				count++;
			}
			else
			{
				max_ans = max(max_ans,count);
				count = 1;
			}
		}
		max_ans = max(max_ans,count);
		count=1;
	}
	return max_ans;
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
			for(int k=0; k<2; k++)
			{
				int x_new = i + x_pos[k];
				int y_new = j + y_pos[k];
				if(!data[x_new][y_new])
				{
					continue;
				}
				else
				{
					swap(data[i][j],data[x_new][y_new]);
					answer = max(answer,find());
					swap(data[i][j],data[x_new][y_new]);
				}
			}
		}
	}
	printf("%d",answer);
}