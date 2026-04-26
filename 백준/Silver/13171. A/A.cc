#include <stdio.h>
#define MOD 1000000007
unsigned long long int pow(unsigned long long int a, unsigned long long int b)
{
	if(b == 0)
	{
		return 1;
	}
	
	unsigned long long int n = pow(a,b/2) % MOD;
	unsigned long long int value = (n * n) % MOD;
	if(b % 2 == 0)
	{
		return value;
	}
	else
	{
		return value * a % MOD;
	}	
}
int main(void)
{
	unsigned long long int a,b;
	scanf("%llu %llu",&a,&b);
	printf("%llu\n",pow(a % MOD,b));
	
}