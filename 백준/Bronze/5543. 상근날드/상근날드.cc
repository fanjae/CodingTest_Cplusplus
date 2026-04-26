#include <stdio.h>
int main(void)
{
	int a[5];
	int i;
	int min;
	int min2;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min = a[0];
	min2 = a[3];
	for(i=0;i<3;i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
	}
	for(i=3;i<5;i++)
	{
		if(min2 > a[i])
		{
			min2 = a[i];
		}
	}
	printf("%d\n",min+min2-50);
}