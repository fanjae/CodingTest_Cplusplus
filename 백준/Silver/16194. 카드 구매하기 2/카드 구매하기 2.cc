#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int n;
	int data[1005]={0};
	int dp[1005]={0};
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = data[i];
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<i; j++)
		{
			dp[i] = min(dp[i],dp[i-j]+data[j]);
		}
	}
	
	printf("%d\n",dp[n]);
}