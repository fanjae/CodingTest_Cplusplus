#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char data[105];
	while(gets(data) != NULL)
	{
		count++;
	}
	printf("%d\n",count);
}