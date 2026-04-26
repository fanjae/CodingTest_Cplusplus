#include <stdio.h>
int data[1000005]={0};
int main(void)
{
	int n;
	int max;
	int min;
	scanf("%d",&n);
	scanf("%d",&data[0]);
	max=min=data[0];
	for(int i=1; i<n; i++)
	{
		scanf("%d",&data[i]);
		if(max < data[i])
		{
			max = data[i];
		}
		if(min > data[i])
		{
			min = data[i];
		}
	}
	printf("%d %d\n",min,max);
}
		