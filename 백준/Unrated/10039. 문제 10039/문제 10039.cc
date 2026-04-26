#include <stdio.h>
int main(void)
{
	int a[5],i;
	int avg;
	int sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] < 40)
		{
			sum += 40;
		}
		else
		{
			sum += a[i];
		}
	}
	printf("%d\n",sum/5);
}