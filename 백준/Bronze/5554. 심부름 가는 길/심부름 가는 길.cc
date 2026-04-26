#include <stdio.h>
int main()
{
	int sum=0;
	int su;
	for(int i=0; i<4; i++)
	{
		scanf("%d",&su);
		sum += su;
	}
	printf("%d\n%d\n",sum/60,sum%60);
}