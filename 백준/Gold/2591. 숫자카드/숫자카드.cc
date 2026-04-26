#include <stdio.h>
#include <string.h>
int dp[55][2];
int main(void)
{
	char data[50];
	int len;
	fgets(data,50,stdin);
	len = strlen(data);
	dp[1][0] = 1;
	dp[1][1] = 0;
	
	for(int i=2; i<len; i++)
	{
		dp[i][0] = dp[i-1][0] + dp[i-1][1];
		if(data[i-1] == '0')
		{
			dp[i][0] = 0;
		}
		if(data[i-2] == '1' || data[i-2] == '2')
		{
			if(i == 2)
			{
				dp[i][1] = 1;
			}
			else
			{
				dp[i][1] = dp[i-2][0] + dp[i-2][1];
			}
		}
		if(data[i-2] == '3' && data[i-1] <= '4')
		{
			if(i == 2)
			{
				dp[i][1] = 1;
			}
			else
			{
				dp[i][1] = dp[i-2][0] + dp[i-2][1];
			}
		}
	}
	
	printf("%d\n",dp[len-1][0]+dp[len-1][1]);
}