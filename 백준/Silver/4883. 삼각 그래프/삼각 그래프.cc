/* 
https://www.acmicpc.net
Problem ID : 4883
DP(Dynamic Programming)
*/

#include <stdio.h>
#include <cstring>
#include <algorithm>

#define INF 123456789

using namespace std;
long long int data[100005][4];
long long int dp[100005][4];

int main(void)
{
	int T = 1;
	while(1)
	{
		int n;
		scanf("%d",&n);
		
		if(n == 0)
		{
			break;
		}	
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=3; j++)
			{
				scanf("%lld",&data[i][j]);
			}
		}
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=3; j++)
			{
				dp[i][j] = INF;
			}
		}
		
		dp[1][1] = INF;
		dp[1][2] = data[1][2];
		dp[1][3] = data[1][2] + data[1][3];
		
		for(int i=2; i<=n; i++)
		{
			dp[i][1] = min(dp[i-1][1], dp[i-1][2]) + data[i][1];
			dp[i][2] = min({dp[i-1][1],dp[i-1][2],dp[i-1][3],dp[i][1]}) + data[i][2];
			dp[i][3] = min({dp[i-1][2],dp[i-1][3],dp[i][2]}) + data[i][3];
		}
		
		printf("%d. %lld\n",T,dp[n][2]);
		T++;
	}
	
}