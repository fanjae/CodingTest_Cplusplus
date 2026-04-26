#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	int data[100005];
	int dp[100005]={0};
	int result,i,n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<n; i++)
	{
		dp[i] = data[i] > data[i] + dp[i-1] ? data[i] : data[i] + dp[i-1];
	}
	result = dp[0];
	for(int i=1; i<n; i++)
	{
		if(result < dp[i])
		{
			result = dp[i];
		}
	}
	printf("%d\n",result);
}