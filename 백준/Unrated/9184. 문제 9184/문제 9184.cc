#include <stdio.h>
int dp[55][55][55]={0};

int w(int a,int b, int c)
{
	if(a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	if(a >= 21 || b >= 21 || c >= 21)
	{
		return w(20,20,20);
	}
	
	if(dp[a][b][c] != 0)
	{
		return dp[a][b][c];
	}
	
	int value ;
	if(a < b && b < c)
	{
		value = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
	}
	else
	{
		value = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
	}
	dp[a][b][c] = value;
	return value;
}

int main(void)
{
	int a=1,b=1,c=1;
	while(1)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a == -1 && b == -1 && c == -1)
		{
			break;
		}
		int dp_value = w(a,b,c);
		printf("w(%d, %d, %d) = %d\n",a,b,c,dp_value);
	}
	
}