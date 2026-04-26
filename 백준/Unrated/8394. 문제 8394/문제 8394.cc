#include <stdio.h>
#include <string.h>
unsigned long long int data[10000005]={0,1,2};
int main(void)
{
	unsigned long long int n;
	scanf("%llu",&n);
	for(int i=3; i<=n; i++)
	{
		data[i] = (data[i-1] + data[i-2]) % 10;
	}
	printf("%llu",data[n]);
}