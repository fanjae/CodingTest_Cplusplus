#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#define MY_MAX 2000000000
using namespace std;

int n;
int a[255],b[255];
int dp[255][62550];
int main(void)
{
	scanf("%d",&n);
	int answer = 0;
	int val = MY_MAX;
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		sum += a[i];
	}
	
	fill(&dp[0][0],&dp[0][0] + (255 * 62550), val);
	dp[0][sum] = 0;
	dp[0][sum-a[0]] = b[0];
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<=sum; j++)
		{
			if(dp[i][j] != val)
			{
				dp[i+1][j] = dp[i][j];
				dp[i+1][j-a[i+1]] = min(dp[i+1][j-a[i+1]],dp[i][j]+b[i+1]);
			}
		}
	}
	answer = val;
	for(int i=0; i<=sum; i++)
	{
		answer = min(answer, max(i, dp[n-1][i]));
	}
	printf("%d\n",answer);
}