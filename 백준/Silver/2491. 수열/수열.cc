#include <stdio.h>
int main(void)
{
	int n;
	int max = 1;
	int count = 1;
	int data[100005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=1; i<n; i++)
	{
		if(data[i] >= data[i-1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if(max < count)
		{
			max = count;
		}
	}
	count = 1;
	for(int i=n-1; i>=1; i--)
	{
		if(data[i] <= data[i-1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if(max < count)
		{
			max = count;
		}
	}
	printf("%d\n",max);
}