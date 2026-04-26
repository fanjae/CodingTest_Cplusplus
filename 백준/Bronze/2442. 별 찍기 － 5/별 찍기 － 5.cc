#include <stdio.h>
#include <math.h>
int main(void)
{
	int su=0;
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i+su;j++)
		{
			printf("*");
		}
		su++;
		printf("\n");
	}
}