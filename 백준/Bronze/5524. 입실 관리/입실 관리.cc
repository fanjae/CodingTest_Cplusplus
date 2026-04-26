#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[105];
		scanf("%s",data);
		for(int i=0; i<strlen(data); i++)
		{
			if(isupper(data[i]))
			{
			 	data[i] = tolower(data[i]);
			}
		}
		printf("%s\n",data);
	}
}