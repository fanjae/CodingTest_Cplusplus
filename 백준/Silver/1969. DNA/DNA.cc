#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int n,m;
	int ans=0;
	char data[1005][55];
	char data2[55];
	int count[1005][4]={0};
	scanf("%d %d\n",&n,&m);
	for(int i=0; i<n; i++)
	{
		gets(data[i]);
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(data[j][i] == 'A')
			{
				count[i][0]++;
			}
			else if(data[j][i] == 'C')
			{
				count[i][1]++;
			}
			else if(data[j][i] == 'G')
			{
				count[i][2]++;
			}
			else if(data[j][i] == 'T')
			{
				count[i][3]++;
			}
		}
	}
	for(int i=0; i<m; i++)
	{
		int max = 0;
		char temp;
		for(int j=0; j<4; j++)
		{
			if(max < count[i][j])
			{
				max = count[i][j];
				if(j == 0)
				{
					temp = 'A';
				}
				else if(j == 1)
				{
					temp = 'C';
				}
				else if(j == 2)
				{
					temp = 'G';
				}
				else if(j == 3)
				{
					temp = 'T';
				}
			}
		}
		data2[i] = temp;
	}
	data2[m] = NULL;
	printf("%s\n",data2);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(data[i][j] != data2[j])
			{
				ans++;
			}
		}
	}
	printf("%d\n",ans);
}