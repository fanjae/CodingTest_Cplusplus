#include <stdio.h>
int main(void)
{
	int a[3];
	int max = 0;
	for(int i=0; i<3; i++)
	{
		scanf("%d",&a[i]);
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("%d\n",max-a[0]+max-a[1]+max-a[2]);
}
	
	