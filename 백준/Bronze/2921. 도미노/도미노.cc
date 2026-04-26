#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf("%d",&n);
	for(int i=0; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			sum += i+j;
		}
	}
	printf("%d\n",sum);
}