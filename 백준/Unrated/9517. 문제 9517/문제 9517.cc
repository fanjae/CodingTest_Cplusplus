#include <stdio.h>
int main(void)
{
	int k;
	int n;
	int time_sum = 0;
	int limit = 210;
	scanf("%d",&k);
	scanf("%d",&n);
	
	while(n--)
	{
		int time;
		char value;
		scanf("%d %c",&time, &value);
		time_sum += time;
		if(time_sum >= limit)
		{
			printf("%d\n",k);
			return 0;
		}
		if(value == 'T')
		{
			k++;
			if(k == 9)
			{
				k = 1;
			}
		}
	}
}