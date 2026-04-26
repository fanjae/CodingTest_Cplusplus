#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[205];
int data[205];
int main(void)
{
	int n;
	int max_value = 1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		dp[i] = 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(data[i] > data[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		if(max_value < dp[i])
		{
			max_value = dp[i];
		}
	}
	printf("%d\n",n-max_value);
}