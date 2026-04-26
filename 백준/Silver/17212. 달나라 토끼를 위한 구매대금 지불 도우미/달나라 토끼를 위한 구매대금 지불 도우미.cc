#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int dp[100005];
int coin[4]={1,2,5,7};
int n;
int cal(int k)
{
	if(k == 0)
	{
		return 0;
	}
	int &ret = dp[k];
	if(ret != -1)
	{
		return dp[k];
	}
	ret = 1000005;
	for(int i=0; i<4; i++)
	{
		if(k-coin[i] >= 0)
		{
			ret = min(ret,cal(k-coin[i])+1);
		}
	}
	return ret;
}
int main(void)
{

	memset(dp,-1,sizeof(dp));
	scanf("%d",&n);
	
	int ans = cal(n);
	if(ans == 1000005)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",ans);
	}
}