#include <stdio.h>
int main(void)
{
	int su;
	int sum;
	int index;
	int max=0;
	int i,j;
	for(i=0;i<5;i++)
	{
		sum = 0;
		for(j=0;j<4;j++)
		{
			scanf("%d",&su);
			sum += su;
		}
		if(max < sum)
		{
			index = i+1;
			max = sum;
		}
	}
	printf("%d %d",index,max);
}