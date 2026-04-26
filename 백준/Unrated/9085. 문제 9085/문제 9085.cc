#include <stdio.h>
int main(void)
{
	int t;
	int n;
	int sum=0;
	int i,j,su;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum = 0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&su);
			sum += su;
		}
		printf("%d\n",sum);
	}
}