#include <stdio.h>
int main(void)
{
   long long a,b,t;
   scanf("%lld %lld",&a,&b);
   if(b<a)
	{
	   t = a;
		a = b;
		b = t;
	}
	printf("%lld\n",b-a?b-a-1:0);
	for(long long i=a+1; i<b; i++)
	{
		printf("%lld ",i);
	}
}