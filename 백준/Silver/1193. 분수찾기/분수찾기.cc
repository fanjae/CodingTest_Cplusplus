#include <stdio.h>
int main(void)
{
	long long int n;
	scanf("%lld",&n);
	
	int value = 1;
	while(n > value)
	{
		n -= value;
		value++;
	}
	
	if(value % 2 == 0)
	{
		printf("%d/%d\n",n,value+1-n);
	}
	else
	{
		printf("%d/%d\n",value+1-n,n);
	}
	
}
		
	
	
	