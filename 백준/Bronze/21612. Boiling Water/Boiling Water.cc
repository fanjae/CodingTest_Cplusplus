#include <stdio.h>
int main(void)
{
	int b;
	int kpa;
	scanf("%d",&b);
	
	kpa = 5 * b - 400;
	printf("%d\n",kpa);
	if(kpa < 100)
	{
		printf("1");
	}
	else if(kpa > 100)
	{
		printf("-1");
	}
	else
	{
		printf("0");
	}
}
	