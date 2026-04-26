#include <stdio.h>
int main(void)
{
	int count=0;
	int size[42]={0};
	int t=10;
	int su;
	while(t--)
	{
		scanf("%d",&su);
		size[su%42]++;
	}
	for(int i=0;i<42;i++)
	{
		if(size[i] >= 1)
		{
			count++;
		}
	}
	printf("%d",count);
}