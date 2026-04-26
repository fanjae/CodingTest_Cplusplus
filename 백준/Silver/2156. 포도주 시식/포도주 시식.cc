#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int dp[10005]={0};
	int data[10005]={0};
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	dp[1] = data[1];
	dp[2] = data[1] + data[2];
	for(int i=3; i<=n; i++)
	{
		dp[i] = max(dp[i],dp[i-1]);
		dp[i] = max(dp[i],dp[i-2]+data[i]);
		dp[i] = max(dp[i],dp[i-3]+data[i-1]+data[i]);
	}
	printf("%d",dp[n]);
}
	