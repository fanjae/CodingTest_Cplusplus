#include <stdio.h>
int main(void)
{
	long long int sum = 0;
	long long int n;
	long long int value = 0;
	
	scanf("%lld",&n);
	for(long long int i=0; i<n; i++)
	{
		scanf("%lld",&value);
		sum += value;
	}
	if(sum % 3 == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}