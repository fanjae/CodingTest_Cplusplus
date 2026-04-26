#include <stdio.h>
int main()
{
	int n;
	int count_300 = 0;
	int count_60 = 0;
	int count_10 = 0;
	scanf("%d",&n);
	while(n >= 300)
	{
		n -= 300;
		count_300++;
	}
	while(n >= 60)
	{
		n -= 60;
		count_60++;
	}
	while(n >= 10)
	{
		n -= 10;
		count_10++;
	}
	if(n == 0)
	{
		printf("%d %d %d\n",count_300,count_60,count_10);
	}
	else
	{
		printf("-1\n");
	}
}