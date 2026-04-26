#include <stdio.h>
long long int gcd(long long int a, long long int b)
{
    while (b > 0)
    {
        long long int tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}
int main(void)
{
	long long int a,b;
	long long int gcd_value;
	
	scanf("%lld %lld",&a,&b);
	gcd_value = gcd(a,b);
	for(long long int i=0; i<gcd_value; i++)
	{
		printf("1");
	}
}