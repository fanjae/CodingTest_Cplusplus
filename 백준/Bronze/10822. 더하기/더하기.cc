#include <stdio.h>
int main()
{
	int sum=0;
	int n;
	while(scanf("%d,",&n) > 0)
	{
		sum = sum + n;
	}
	printf("%d\n",sum);
}