#include <stdio.h>
#include <string.h>
int main()
{
	char data[1005];
	while(strcmp(data,"END")!=0)
	{
		gets(data);
		if(strcmp(data,"END") == 0)
		{
			break;
		}
		for(int i=strlen(data)-1; i>=0; i--)
		{
			printf("%c",data[i]);
		}
		printf("\n");
	}
}