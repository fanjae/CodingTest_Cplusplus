#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",n*n);
	}
}