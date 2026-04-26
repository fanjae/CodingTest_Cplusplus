#include <stdio.h>
#include <string.h>
int main()
{
	char data[1005];
	char data2[1005];
	gets(data);
	for(int i=0; i<strlen(data); i++)
	{
		data2[i] = data[strlen(data)-i-1];
	}
	if(strcmp(data,data2)==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}