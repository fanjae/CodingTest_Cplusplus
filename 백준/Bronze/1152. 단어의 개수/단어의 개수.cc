#include <stdio.h>
#include <string.h>
char data[10000005];
int main()
{
	int count=0;
	char *temp;
	gets(data);
	temp = strtok(data," ");
	while(temp != NULL)
	{
		count++;
		temp = strtok(NULL," ");
   }
   printf("%d\n",count);
}