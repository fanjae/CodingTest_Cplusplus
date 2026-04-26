#include <stdio.h>
int min(int a, int b)
{
	if(a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	int n;
	int data,data2,data3;
	scanf("%d",&n);
	if(n == 2)
	{
		scanf("%d %d",&data,&data2);
		for(int i=1; i<=min(data,data2); i++)
		{
			if(data % i == 0 && data2 % i == 0)
			{
				printf("%d\n",i);
			}
		}
	}
	if(n == 3)
	{
		scanf("%d %d %d",&data,&data2,&data3);
		for(int i=1; i<=min(min(data,data2),data3); i++)
		{
			if(data % i == 0 && data2 % i == 0 && data3 % i == 0)
			{
				printf("%d\n",i);
			}
		}
	}
}