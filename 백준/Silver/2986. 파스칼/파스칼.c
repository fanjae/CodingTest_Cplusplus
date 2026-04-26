#include <stdio.h>
int f(int a)
{
	int i;
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			return a/i;
		}
	}
	return 1;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",n-f(n));
}