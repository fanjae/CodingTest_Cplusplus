#include <stdio.h>
long long int pow(long long int a,long long int b,long long int c)
{
	if(b == 0)
	{
		return 1;
	}
	
	long long int n = pow(a, b / 2, c);
	long long int temp = (n * n) % c;
	
	if(b % 2 == 0)
	{
		return temp;
	}
	else
	{
		return a * temp % c;
	}
}
int main(void)
{
	long long int a,b,c;
	long long int value;
	scanf("%lld %lld %lld",&a,&b,&c);
	
	value = pow(a,b,c);
	printf("%lld",value);
}