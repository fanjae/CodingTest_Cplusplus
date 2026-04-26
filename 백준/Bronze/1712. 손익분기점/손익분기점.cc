#include <stdio.h>
int main(void)
{
	long long int a,b,c;
	long long int start,end;
	scanf("%lld %lld %lld",&a,&b,&c);
	if(b>=c)
	{
		printf("-1");
	}
	else
	{
		printf("%lld\n",a/(c-b)+1);
	}
}