#include <stdio.h>
#include <stdbool.h>

int possible(int i)
{
	int sum = i;
	while(i != 0)
	{
		sum += i % 10;
		i = i / 10;
	}
	return sum;
}
int main(void)
{
	int data[10005]={0};
	for(int i=1; i<=10000; i++)
	{
		int go = possible(i);
		if(go <= 10000)
		{
		 	data[go] = 1;
		}
	}
	for(int i=1; i<=10000; i++)
	{
		if(data[i] == 0)
		{
			printf("%d\n",i);
		}
	}
}