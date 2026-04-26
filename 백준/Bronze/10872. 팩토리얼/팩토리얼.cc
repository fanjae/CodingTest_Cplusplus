#include <stdio.h>
int main()
{
	long long int t=1;
	int n;
	scanf("%d",&n);
	for(int i=n; i>=1; i--)
	{
		t *= i;
	}
	printf("%lld\n",t);
}