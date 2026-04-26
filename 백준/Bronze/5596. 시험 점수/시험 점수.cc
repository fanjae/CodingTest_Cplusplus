#include <stdio.h>
int main()
{
	int sum,sum2;
	int su;
	sum = sum2 = 0;
	for(int i=0; i<4; i++)
	{
		scanf("%d",&su);
		sum += su;
	}
	for(int i=0; i<4; i++)
	{
		scanf("%d",&su);
		sum2 += su;
	}
	if(sum > sum2)
	{
		printf("%d\n",sum);
	}
	else if(sum < sum2)
	{
		printf("%d\n",sum2);
	}
	else
	{
		printf("%d\n",sum);
	}
}