#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int day,k;
	scanf("%d %d",&day,&k);
	
	for(int i=1; i<k; i++)
	{
		for(int j=i; j<k; j++)
		{
			int temp_day = 3;
			int first = i;
			int second = j;
			int temp_sum = first + second;
			while(temp_day < day)
			{
				temp_day++;
				first = second;
				second = temp_sum;
				temp_sum = first + second;
				
			}
			if(temp_sum == k)
			{
				printf("%d\n%d\n",i,j);
				return 0;
			}
			if(first + second> k) break;
		}
	}
}