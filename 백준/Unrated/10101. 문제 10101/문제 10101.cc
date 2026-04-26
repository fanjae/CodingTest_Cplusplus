#include <stdio.h>
int main(void)
{
	int a,b,c;
	int sum=0;
	scanf("%d %d %d",&a,&b,&c);
	sum = a + b + c;
	if(sum != 180)
	{
		printf("Error");
	}
	else if(a == 60 && b == 60 && c == 60)
	{
		printf("Equilateral");
	}
	else if((sum == 180 && a == b && a != c) || (sum == 180 && b == c && b != a) || (sum == 180 && a == c && a != b))
	{
	   printf("Isosceles");
	}
	else if((sum == 180 && a != b && b != c && a != c))
	{
		printf("Scalene");
	}
}