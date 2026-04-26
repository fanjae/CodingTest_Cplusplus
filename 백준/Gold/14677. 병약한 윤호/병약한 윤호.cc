#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std; 
int dp[1505][1505][3];
int value[1505];
char data[1505];
int dp_cal(int left, int right, int state)
{
	if(left > right)
	{
		return 0;
	}
	int &result = dp[left][right][state];
	
	if(result != -1)
	{
		return result;
	}
	result = 0;
	
	if(value[left] == state)
	{
		result = max(result, dp_cal(left + 1, right, (state + 1) % 3) + 1);
	}
	if(value[right] == state)
	{
		result = max(result, dp_cal(left, right-1, (state + 1) % 3) + 1);
	}
	return result;
	
}
int main(void)
{
	int n;
	int len;
	scanf("%d",&n);
	n = n * 3;
	scanf("%s",data);
	
	memset(dp,-1,sizeof(dp));
	for(int i=0; i<n; i++)
	{
		if(data[i] == 'B')
		{
			value[i] = 0;
		}
		else if(data[i] == 'L')
		{
			value[i] = 1;
		}
		else
		{
			value[i] = 2;
		}
	}
	printf("%d\n",dp_cal(0,n-1,0));
}