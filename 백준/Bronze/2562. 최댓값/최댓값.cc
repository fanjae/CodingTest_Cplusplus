#include <stdio.h>
int main(void)
{
	int a[10];
	int i,max=0,index;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		if(max < a[i])
		{
			max = a[i];
			index = i+1;
		}
	}
	printf("%d\n",max);
	printf("%d\n",index);
}