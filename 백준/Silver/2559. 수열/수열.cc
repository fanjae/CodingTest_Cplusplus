#include <stdio.h>
int data[100002];
int main(void)
{
	int n,k,max=-80000000,i;
	int sum=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&data[i]);
		sum += data[i];
	}
	if(max < sum)
	{
		max = sum;
	}
	for(;i<n;i++)
	{
		scanf("%d",&data[i]);

		sum += data[i];
		sum -= data[i-k];
		if(max < sum)
		{
			max = sum;
		}
	}
	printf("%d\n",max);
}