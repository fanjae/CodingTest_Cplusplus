#include <stdio.h>
int main(void)
{
	int i,n;
	int a[10]={0};
	int sum=0;
	int sum2=0;
	scanf("%d",&sum);
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		sum2 += a[i];
	}
	printf("%d",sum-sum2);
	
}