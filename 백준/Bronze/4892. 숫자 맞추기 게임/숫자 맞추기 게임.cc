#include <stdio.h>
int main(void)
{
	int n = 3;
	int g = 1;
	while(n != 0)
	{
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		
		int value = n * 3;
		printf("%d. ",g++);
		if(value % 2 == 1)
		{
			printf("odd ");
			value = (value + 1) / 2;
		}
		else
		{
			printf("even ");
			value = value / 2;
		}
		value = 3 * value;
		
		value = value / 9;
		
		printf("%d\n",value);
	
	}
}