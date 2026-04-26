#include <stdio.h>
int data[1000005];
int main(void)
{
	long long int count = 0;
	int n;
	int b,c;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("%d %d",&b,&c);
	for(int i=0; i<n; i++)
	{
		count++;
		data[i] -= b;
		if(data[i] <= 0)
		{
			continue;
		}
		else
		{
			count += (data[i] / c);
			if(data[i] % c > 0)
			{
				count++;
			}
		}
	}
	printf("%lld\n",count);
}