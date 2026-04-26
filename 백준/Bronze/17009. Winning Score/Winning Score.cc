#include <stdio.h>
int main(void)
{
	int a[4];
	int b[4];
	int sum=0,sum2=0;
	for(int i=1; i<=3; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=3; i++)
	{
		scanf("%d",&b[i]);
	}
	sum = a[1] * 3 + a[2] * 2 + a[3] * 1;
	sum2 = b[1] * 3 + b[2] * 2 + b[3] * 1;
	
	if(sum > sum2)
	{
		printf("A");
	}
	else if(sum < sum2)
	{
		printf("B");
	}
	else
	{
		printf("T");
	}
}