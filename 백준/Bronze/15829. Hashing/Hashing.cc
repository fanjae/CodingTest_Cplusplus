#include <stdio.h>

#define MOD 1234567891
int main(void)
{
	int n;
	unsigned long long int value = 0;
	unsigned long long int mul = 1;
	char data[55];
	scanf("%d",&n);

	scanf("%s",data);
	for(int i=0; i<n; i++)
	{
		value = value + ((data[i] - 'a' + 1) * mul) % MOD;
		mul *= 31;
		if(mul > MOD)
		{
			mul = mul % MOD;
		}
		if(value > MOD)
		{
			value = value % MOD;
		}
	}
	printf("%llu\n",value);
}