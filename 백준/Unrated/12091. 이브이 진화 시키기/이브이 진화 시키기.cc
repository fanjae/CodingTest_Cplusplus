#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n % 3 == 0)
	{
		printf("Jolteon");
	}
	else if(n% 3 == 1)
	{
		printf("Flareon");
	}
	else
	{
		printf("Vaporeon");
	}
}