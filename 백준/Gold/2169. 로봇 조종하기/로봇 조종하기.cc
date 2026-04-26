#include <stdio.h>
#include <algorithm>

using namespace std; 
int dp[1005][1005];
int left_temp[1005];
int right_temp[1005];
int data[1005][1005];
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
			dp[1][j] = (data[1][j] + dp[1][j-1]);
		}
	}
		
	for(int i=2; i<=n; i++)
	{
		left_temp[0] = dp[i-1][1];
		right_temp[m+1] = dp[i-1][m];
		for(int j=1; j<=m; j++)
		{
			left_temp[j] = max(data[i][j] + dp[i-1][j],data[i][j] + left_temp[j-1]);
		}
		for(int j=m; j>=1; j--)
		{
			right_temp[j] = max(data[i][j] + dp[i-1][j],data[i][j] + right_temp[j+1]);
		}
		for(int j=1; j<=m; j++)
		{
			dp[i][j] = max(left_temp[j],right_temp[j]);
		}
	}
	
	printf("%d\n",dp[n][m]);
}
		
	
	