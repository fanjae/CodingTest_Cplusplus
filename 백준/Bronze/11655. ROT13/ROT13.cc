#include <stdio.h>
#include <string.h>
int main()
{
	char data[105];
	gets(data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] >= 'A' && data[i] <= 'Z')
		{
			if(data[i] + 13 > 'Z')
			{
				data[i] -= 26;
			}
			data[i] += 13;
		}
		else if(data[i] >= 'a' && data[i] <= 'z')
		{
			if(data[i] + 13 > 'z')
			{
				data[i] -= 26;
			}
			data[i] += 13;
		}
		printf("%c",data[i]);
	}
}