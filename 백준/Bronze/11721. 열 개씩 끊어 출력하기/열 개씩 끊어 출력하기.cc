#include <stdio.h>
#include <string.h>
int main()
{
	char data[105];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		printf("%c",data[i]);
		if(i % 10 == 9)
		{
			printf("\n");
		}
	}
}