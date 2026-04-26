#include <stdio.h>
#include <algorithm>

#define INF 987654321

using namespace std;
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[505];
		int dp[505][505]={0};
		int sum[505]={0};
		int n;
		
		scanf("%d",&n);
		for(int i=1; i<=n; i++)
		{
			scanf("%d",&data[i]);
			if(i == 1)
			{
				sum[i] = data[i];
			}
			else
			{
				sum[i] = sum[i-1] + data[i];
			}
		}

		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				dp[i][j] = INF;
			}
		}
				
		for(int i=1; i<=n; i++)
		{
			dp[i][i] = 0;
		}
		

		for(int d=1; d<=n-1; d++) // 대각선 처리 
		{
			for(int i=1; i<=n-d; i++)
			{
				int j = i + d;
				for(int k=i; k<j; k++)
				{
					dp[i][j] = min(dp[i][j],dp[i][k] + dp[k+1][j] + sum[j] - sum[i-1]);
				}
			}
		}
		
		printf("%d\n",dp[1][n]);
	}
}