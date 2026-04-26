#include <stdio.h>
int data[1005];
int main()
{
	int n;
	int max=0;
	int sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(data[i] < data[i+1])
		{
			sum += data[i+1] - data[i];
		}
		else
		{
			if(max < sum)
			{
				max = sum;
			}
			sum = 0;
		}
	}
	printf("%d\n",max);
}
		
	