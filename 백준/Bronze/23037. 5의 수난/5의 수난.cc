#include <stdio.h>
int main(void)
{
	int data[5];
	int value[5];
	int sum = 0;
	for(int i=0; i<5; i++)
	{
		scanf("%1d",&data[i]);
		value[i] = data[i];
	}
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4; j++)
		{
			value[i] *= data[i];
		}
		sum += value[i];
	}
	printf("%d\n",sum);

}