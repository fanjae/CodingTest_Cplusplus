#include <stdio.h>
int main(void)
{
	int mod;
	scanf("%d",&mod);
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		if(n % mod == 0)
		{
			printf("%d is a multiple of %d.\n",n,mod);
		}
		else
		{
			printf("%d is NOT a multiple of %d.\n",n,mod);
		}
	}
}
		