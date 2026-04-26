#include <stdio.h>
int main()
{
	int sum=0;
	int n;
	int T;
	scanf("%d",&T);
	n = T;
	while(T--)
	{
		int in;
		scanf("%d",&in);
		if(in)
		{
			sum++;
		}
	}
	if(n % 2 == 1 && sum >= n / 2 + 1)
	{
		printf("Junhee is cute!");
	}
	else if(n % 2 == 0 && sum >= n / 2 + 1)
	{
		printf("Junhee is cute!");
	}
	else
	{
		printf("Junhee is not cute!");
	}
}