#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int c,n;
	int data[15];
	int dp[1005]={0};
	scanf("%d %d",&c,&n);
	
	memset(dp,0x7f,sizeof(dp));
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[data[i]] = 1;
	}
	for(int i=1; i<=c; i++)
	{
		if(dp[i] == 0)
		{
			continue;	
		}
		for(int j=1; j<=n; j++)
		{
			if(i+data[j] > c)
			{
				continue;
			}
			dp[i+data[j]] = min(dp[i+data[j]],dp[i]+dp[data[j]]);
		}
	}
	printf("%d\n",dp[c]);
}
	