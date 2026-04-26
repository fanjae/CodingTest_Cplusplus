#include <stdio.h>
#include <string.h>
int main()
{
	int count=0;
	char data[105];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] == ',')
		{
			count++;
		}
	}
	printf("%d\n",count+1);
}