#include <stdio.h>
int main()
{
	long long int n,result=1;
	scanf("%lld",&n);
	while(1)
	{
		long long int sum = result;
		long long int value = result+1;
		for(long long int j=0; j <= result; j++)
		{
			sum += value;
			value = value * 2;
		}
		if(sum >= n)
		{
			printf("%lld",result);
			return 0;
		}
		result++;
	}
	return 0;
}
		