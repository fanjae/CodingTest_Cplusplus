#include <stdio.h>
#include <string.h>
int main()
{
	char data[1005];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] - 3 < 'A')
		{
			data[i] += 23;
		}
		else
		{
			data[i] -= 3;
		}
		printf("%c",data[i]);
	}
}
	