#include <stdio.h>
#include <algorithm>
#include <limits.h>
int d[505];
int dp[505][505];
int cnt = 0;
int n;

using namespace std;
int main(void)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		d[cnt++] = x; 
		if(i == n-1)
		{
			d[cnt++] = y;
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			dp[i][j] = INT_MAX-1;
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		dp[i][i] = 0;
	}
	
	for(int diagonal=1; diagonal <=n-1; diagonal++)
	{
		for(int i=1; i<=n-diagonal; i++)
		{
			int j = i+diagonal;
			for(int k=i; k<j; k++)
			{
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k+1][j] + (d[i-1] * d[k] * d[j]));
			}
		}
	}
	
	printf("%d\n",dp[1][n]);
}