#include <stdio.h>
int main(void)
{
	int n;
	int i,j;
	int su;
	scanf("%d",&n);
	su = n - 1;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i+su;j++)
		{
			printf("*");
		}
		su--;
		printf("\n");
	}
}