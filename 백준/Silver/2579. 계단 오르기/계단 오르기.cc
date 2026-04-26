#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int data[305]={0};
	int dp[305][3]={0};
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	dp[1][1] = dp[1][2] = data[1];
	for(int i=2; i<=n; i++)
	{
		dp[i][1] = dp[i-1][2]+data[i];
		dp[i][2] = max(dp[i-2][1],dp[i-2][2])+data[i];
	}
	printf("%d",max(dp[n][1],dp[n][2]));
}
