#include <stdio.h>
int main(void)
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a*b/c >= a/b*c)
	{
		printf("%d\n",int(a*b/c));
	}
	else
	{
		printf("%d\n",int(a/b*c));
	}
}