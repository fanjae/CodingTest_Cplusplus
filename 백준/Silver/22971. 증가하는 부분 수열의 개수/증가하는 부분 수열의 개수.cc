#include <stdio.h>
#define MOD 998244353
int dp[5005];
int data[5005];

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(data[i] > data[j])
			{
				dp[i] = (dp[i] + dp[j]) % MOD;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		printf("%d ",dp[i]);
	}
}