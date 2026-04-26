#include <stdio.h>
int num(int n,int d)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n%d + num((n-n%d)/10,d);	
	}
}
int main()
{
	int n,sum;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		sum = i + num(i,10);
		if(sum == n)
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}