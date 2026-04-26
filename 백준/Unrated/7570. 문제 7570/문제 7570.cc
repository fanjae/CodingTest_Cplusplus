#include <stdio.h>
using namespace std;

int data[1000005];
int dp[10000005];
int max;
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
		dp[data[i]] = dp[data[i]-1] + 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(max < dp[i])
		{
			max = dp[i];
		}
	}
	
	printf("%d\n",n-max);
}