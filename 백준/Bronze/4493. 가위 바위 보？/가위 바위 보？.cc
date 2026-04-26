#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		int sum,sum2;
		char data[5];
		sum = sum2 = 0;
		scanf("%d\n",&n);
		while(n--)
		{
			gets(data);
			if(data[0] == 'R' && data[2] == 'S')
			{
				sum++;
			}
			else if(data[0] == 'R' && data[2] == 'P')
			{
				sum2++;
			}
			else if(data[0] == 'P' && data[2] == 'R')
			{
				sum++;
			}
			else if(data[0] == 'P' && data[2] == 'S')
			{
				sum2++;
			}
			else if(data[0] == 'S' && data[2] == 'R')
			{
				sum2++;
			}
			else if(data[0] == 'S' && data[2] == 'P')
			{
				sum++;
			}
		}
		if(sum > sum2)
		{
			printf("Player 1\n");
		}
		else if(sum == sum2)
		{
			printf("TIE\n");
		}
		else if(sum < sum2)
		{
			printf("Player 2\n");
		}
	}
}