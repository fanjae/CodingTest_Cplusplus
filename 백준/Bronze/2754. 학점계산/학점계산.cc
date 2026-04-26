#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10];
	scanf("%s",a);
	if(!strcmp(a,"A+"))
	{
		printf("4.3");
	}
	else if(!strcmp(a,"A0"))
	{
		printf("4.0");
	}
	else if(!strcmp(a,"A-"))
	{
		printf("3.7");
	}
	else if(!strcmp(a,"B+"))
	{
		printf("3.3");
	}
	else if(!strcmp(a,"B0"))
	{
		printf("3.0");
	}
	else if(!strcmp(a,"B-"))
	{
		printf("2.7");
	}
	else if(!strcmp(a,"C+"))
	{
		printf("2.3");
	}
	else if(!strcmp(a,"C0"))
	{
		printf("2.0");
	}
	else if(!strcmp(a,"C-"))
	{
		printf("1.7");
	}
	else if(!strcmp(a,"D+"))
	{
		printf("1.3");
	}
	else if(!strcmp(a,"D0"))
	{
		printf("1.0");
	}
	else if(!strcmp(a,"D-"))
	{
		printf("0.7");
	}
	else if(!strcmp(a,"F"))
	{
		printf("0.0");
	}
}