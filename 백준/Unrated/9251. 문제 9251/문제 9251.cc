#include <stdio.h>
#include <string.h>
#include <algorithm>
char data[1005];
char data2[1005];
	
int dp[1005][1005]={0};
int len1;
int len2;
int ans = 0;
using namespace std;

int main(void)
{
	for(int i=1; ; i++)
	{
		scanf("%c",&data[i]);
		if(data[i] == '\n')
		{
			data[i] = 0;
			len1 = i;
			break;
		}
	}
	for(int i=1; ; i++)
	{
		scanf("%c",&data2[i]);
		if(data2[i] == '\n')
		{
			data2[i] = 0;
			len2 = i;
			break;
		}
	}			
	
	for(int i=1; i<=len1; i++)
	{
		for(int j=1; j<=len2; j++)
		{
			if(data[i] == data2[j])
			{
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]); 	
			}
			
		}
		
	}

	printf("%d\n",dp[len1-1][len2-1]);
		
}