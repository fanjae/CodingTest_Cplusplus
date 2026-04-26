#include <stdio.h>
#include <string.h>
char data[100000005];
int main(void)
{
	int len;
	scanf("%s",data);
	len = strlen(data);
	
	for(int i=0; i<len; i++)
	{
		data[i] = data[i] - 32;
	}
	printf("%s",data);
}