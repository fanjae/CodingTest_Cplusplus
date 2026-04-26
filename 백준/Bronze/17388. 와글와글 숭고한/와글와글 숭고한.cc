#include <stdio.h>
int main(void)
{
	int min=105;
	int pos;
	int sum = 0;
	int data[3];
	char school[3][100]={"Soongsil","Korea","Hanyang"};
	for(int i=0; i<3; i++)
	{
		scanf("%d",&data[i]);
		if(min > data[i])
		{
			min = data[i];
			pos=i;
		}
		sum += data[i];
	}
	if(sum >= 100)
	{
		printf("OK");
	}
	else
	{
		printf("%s",school[pos]);
	}
}