// a : 97
#include <stdio.h>
#include <string.h>
int main()
{
	char data[205];
	while(strcmp(data,"*") != 0)
	{
		int set = 0;
		int count[26]={0};
		gets(data);
		if(strcmp(data,"*") == 0)
		{
			break;
		}
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] != ' ')
			{
				count[data[i]-97]++;
			}
		}
		
		for(int i=0; i<26; i++)
		{
			if(count[i] == 0)
			{
				set = 1;
				break;
			}
		}
		if(set == 1)
		{
			printf("N\n");
		}
		else
		{
			printf("Y\n");
		}
	}
}