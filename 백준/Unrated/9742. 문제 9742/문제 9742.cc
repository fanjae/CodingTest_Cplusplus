#include <stdio.h>
#include <string.h>

#include <algorithm>

using namespace std; 
int dp[25];
int fact(int n)
{
	if(dp[n] != 0)
	{
		return dp[n];
	}
	if(n == 1)
	{
		return dp[n] = 1;
	}
	else
	{
		return dp[n] = n * fact(n-1);
	}
}
	
int main(void)
{
	char data[15];
	char temp[15];
	int len;
	int count = 0;
	int ans_count;
	
	fact(10);
	while(scanf("%s %d",data,&ans_count) != EOF)
	{
		strcpy(temp,data);
		int len = strlen(temp);
		bool exist = false;
		if(ans_count > dp[len])
		{
			exist = false;	
		}
		else
		{	
			do
			{
				if(count == ans_count-1)
				{
					exist = true;
					break;
				}
				count++;
			}while(next_permutation(temp,temp+len));
		}
		if(exist == false)
		{
			printf("%s %d = No permutation\n",data,ans_count);
		}
		else
		{
			printf("%s %d = %s\n",data,ans_count,temp);
		}
		count = 0;
	}
}