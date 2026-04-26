#include <stdio.h>
int main()
{
	int m;
	int d;
	scanf("%d",&m);
	scanf("%d",&d);
	if(m <= 1 && d <= 31)
	{
		printf("Before\n");
	}
	else if(m <= 2 && d <= 17)
	{
		printf("Before\n");
	}
	else if(m == 2 && d == 18)
	{
		printf("Special\n");
	}
	else
	{
		printf("After\n");
	}
}