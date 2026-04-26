#include <stdio.h>
#include <string.h>
int main()
{
	char data[105];
	int n;
	gets(data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] == 'a' || data[i] =='e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u')
		{
			printf("%c",data[i]);
			i+=2;
		}
		else
		{
			printf("%c",data[i]);
		}
	}
}