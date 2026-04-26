#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	while(scanf("%d",&n) != EOF)
	{
		sum = sum + n;
	}
	printf("%d\n",sum);
}