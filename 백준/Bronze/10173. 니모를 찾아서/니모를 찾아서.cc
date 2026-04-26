#include <stdio.h>
#include <string.h>
int main()
{
	char data[95];
	while(strcmp(data,"EOI") != 0)
	{
		int find = 0;
		gets(data);
		if(strcmp(data,"EOI") == 0)
		{
			break;
		}
		for(int i=0; i<strlen(data)-3; i++)
		{
			if((data[i] == 'n' || data[i] == 'N') && (data[i+1] == 'E' || data[i+1] == 'e') && (data[i+2] == 'M' || data[i+2] == 'm') && (data[i+3] == 'O' || data[i+3] == 'o'))
			{
				printf("Found\n");
				find = 1;
				break;
			}	
		}
		if(find == 0)
		{
			printf("Missing\n");
		}
		
	}
}