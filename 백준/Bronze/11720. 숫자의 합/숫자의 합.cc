#include <stdio.h>
int main(void)
{
	int T;
	int sum = 0;
	scanf("%d",&T);
	while(T--)
	{
		int value;
		scanf("%1d",&value);
		sum = sum + value;
	}
	printf("%d\n",sum);
}

