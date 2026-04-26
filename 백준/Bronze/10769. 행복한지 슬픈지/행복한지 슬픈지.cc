#include <stdio.h>
#include <string.h>
int main()
{
	int smile= 0;
	int sad = 0;
	char data[1005];
	gets(data);
	for(int i=0; i<strlen(data)-2; i++)
	{
		if(data[i] == ':')
		{
			if(data[i+1] == '-')
			{
				if(data[i+2] == ')')
				{
					smile++;
				}
				else if(data[i+2] == '(')
				{
					sad++;
				}
			}
		}
	}
	if(smile == 0 && sad == 0)
	{
		printf("none\n");
	}
	else if(smile == sad)
	{
		printf("unsure\n");
	}
	else if(smile > sad)
	{
		printf("happy\n");
	}
	else if(smile < sad)
	{
		printf("sad\n");
	}
}