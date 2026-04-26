#include <stdio.h>
int contest_1(int rank)
{
	if(rank <= 1)
	{
		return 5000000;
	}
	else if(rank <= 3)
	{
		return 3000000;
	}
	else if(rank <= 6)
	{
		return 2000000;
	}
	else if(rank <= 10)
	{
		return 500000;
	}
	else if(rank <= 15)
	{
		return 300000;
	}
	else if(rank <= 21)
	{
		return 100000;
	}
	return 0;
}
int contest_2(int rank)
{
	if(rank <= 1)
	{
		return 5120000;
	}
	else if(rank <= 3)
	{
		return 2560000;
	}
	else if(rank <= 7)
	{
		return 1280000;
	}
	else if(rank <= 15)
	{
		return 640000;
	}
	else if(rank <= 31)
	{
		return 320000;
	}
	return 0;
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int sum = 0;
		int a,b;
		scanf("%d %d",&a,&b);
		if(a != 0)
		{
			sum += contest_1(a);
		}
		if(b != 0)
		{
			sum += contest_2(b);
		}
		printf("%d\n",sum);
	}
}