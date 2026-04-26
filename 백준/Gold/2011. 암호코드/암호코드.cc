#include <stdio.h>
#include <string.h>
#define MOD 1000000
int dp[5005][2]={0};
int main(void)
{
	int len;
	char data[5005];
	fgets(data,5005,stdin);
	len = strlen(data);
	
	dp[1][0] = 1;
	dp[1][1] = 0;
	if(data[0] == '0' || strcmp(data,"") == 0)
	{
		printf("0");
		return 0;
	}
	for(int i=2; i<=len; i++)
	{
		if(data[i-1] == '0')
		{
			dp[i][0] = 0;	
		}
		else
		{
			dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
		}
		
		if(data[i-2] == '0' && data[i-1] == '0')
		{
			printf("0");
			return 0;
		}
		if(data[i-2] == '1')
		{
			if(i == 2)
			{
				dp[i][1] = 1;
			}
			else
			{
				dp[i][1] = (dp[i-2][0] + dp[i-2][1]) % MOD;
			}
		}
		else if(data[i-2] == '2' && data[i-1] <= '6')
		{
			if(i == 2)
			{
				dp[i][1] = 1;
			}
			else
			{
				dp[i][1] = (dp[i-2][0] + dp[i-2][1]) % MOD;
			}
		}
		else
		{
			dp[i][1] = 0;
		}
	}
	
	printf("%d\n",(dp[len-1][0]+dp[len-1][1]) % MOD);
}