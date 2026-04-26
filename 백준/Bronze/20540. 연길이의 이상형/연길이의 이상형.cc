#include <stdio.h>
#include <string.h>
int main(void)
{
	char data[10];
	int len;
	scanf("%s",data);
	len = strlen(data);
	
	if(data[0] == 'E')
	{
		printf("I");
	}
	else if(data[0] == 'I')
	{
		printf("E");
	}
	
	if(data[1] == 'S')
	{
		printf("N");
	}
	else
	{
		printf("S");
	}
	
	if(data[2] == 'F')
	{
		printf("T");
	}
	else
	{
		printf("F");
	}
	
	if(data[3] == 'P')
	{
		printf("J");
	}
	else
	{
		printf("P");
	}
}