#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	int n;
	int data[2][100005]={0};
	int dp[2][100005]={0};
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<n; j++)
			{
				scanf("%d",&data[i][j]);
			}
		}
		dp[0][0] = data[0][0];
		dp[1][0] = data[1][0];
		
		for(int i=1; i<n; i++)
		{
			dp[0][i] = max(dp[1][i-1],dp[1][i-2])+data[0][i];
			dp[1][i] = max(dp[0][i-1],dp[0][i-2])+data[1][i];
		}
		printf("%d\n",max(dp[0][n-1],dp[1][n-1]));
	}
}