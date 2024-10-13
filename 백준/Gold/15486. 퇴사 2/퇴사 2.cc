#include <stdio.h>
#include <algorithm>
int dp[1505505];
int t[1505505];
int p[1505505];
using namespace std;
int main(void)
{
	int n;
	int ans;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&t[i],&p[i]);			
	}
	
	for(int i=0; i<n; i++)
	{
		dp[i+1] = max(dp[i],dp[i+1]);
		dp[t[i]+i] = max(p[i]+dp[i],dp[t[i]+i]);
	}
	
	printf("%d\n",dp[n]);
}