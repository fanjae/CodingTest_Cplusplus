#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[2][3];
int dp2[2][3];
int data[3];
int main(void)
{
	int n;
	int max_value=0;
	int min_value=900000;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d",&data[0],&data[1],&data[2]);
		
		if(i == 0)
		{
			dp[0][0] = dp2[0][0] = data[0];
			dp[0][1] = dp2[0][1] = data[1];
			dp[0][2] = dp2[0][2] = data[2];
			if(n == 1)
			{
				max_value = max({dp[0][0],dp[0][1],dp[0][2]});
				min_value = min({dp2[0][0],dp2[0][1],dp2[0][2]});	
			}
			continue;	
		}
		else
		{
			dp[1][0] = max(dp[0][0]+data[0],dp[0][1]+data[0]);
			dp[1][1] = max({dp[0][0]+data[1],dp[0][1]+data[1],dp[0][2]+data[1]});
			dp[1][2] = max(dp[0][1]+data[2],dp[0][2]+data[2]);
			
			dp2[1][0] = min(dp2[0][0]+data[0],dp2[0][1]+data[0]);
			dp2[1][1] = min({dp2[0][0]+data[1],dp2[0][1]+data[1],dp2[0][2]+data[1]});
			dp2[1][2] = min(dp2[0][1]+data[2],dp2[0][2]+data[2]);			
		}

		if(i+1 == n)
		{
			max_value = max({dp[1][0],dp[1][1],dp[1][2]});
			min_value = min({dp2[1][0],dp2[1][1],dp2[1][2]});
		}	
		
		for(int i=0; i<=2; i++)
		{
			dp[0][i] = dp[1][i];
			dp2[0][i] = dp2[1][i];
		}
	}


	printf("%d %d\n",max_value,min_value);
	
}