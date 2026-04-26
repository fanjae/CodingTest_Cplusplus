#include <stdio.h>
int main(void)
{
	int n;
	int dp[10] = {1,1};
	for(int i=2; i< 10; i++)
	{
		dp[i] = i * dp[i-1];
	}
	
	double sum = 0;
	printf("n e\n");
	printf("- -----------\n");
	for(int i = 0; i < 10; i++)
	{
		sum += (double) 1/ dp[i];
		if(i > 2)
		{
			printf("%d %.9f\n",i,sum);
		}
		else
		{
			printf("%d %.9g\n",i,sum);
		}
	}
	
}
