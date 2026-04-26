#include <stdio.h>
#include <string.h>
int main()
{
	char data[35];
	while(1)
	{
		int count[2]={0};
		scanf("%s",data);
		if(strcmp(data,"#") == 0)
		{
			break;
		}
		for(int i=0; i<strlen(data)-1; i++)
		{
			if(data[i] == '1')
			{
				count[1]++;
			}
			else
			{
				count[0]++;
			}	
		}
		if(data[strlen(data)-1] == 'e' && count[1] % 2 == 0)
		{
			for(int i=0; i<strlen(data)-1; i++)
			{
				printf("%c",data[i]);
			}
			printf("0\n");
		}
		else if(data[strlen(data)-1] == 'e' && count[1] % 2 == 1)
		{
			for(int i=0; i<strlen(data)-1; i++)
			{
				printf("%c",data[i]);
			}
			printf("1\n");
		}
		else if(data[strlen(data)-1] == 'o' && count[1] % 2 == 0)
		{
			for(int i=0; i<strlen(data)-1; i++)
			{
				printf("%c",data[i]);
			}
			printf("1\n");
		}
		else if(data[strlen(data)-1] == 'o' && count[1] % 2 == 1)
		{
			for(int i=0; i<strlen(data)-1; i++)
			{
				printf("%c",data[i]);
			}
			printf("0\n");
		}
	}
}