#include <stdio.h>
#include <string.h>
int main(void)
{
	char data[300];
	while(1)
	{
		int count = 0;
		gets(data);
		if(strcmp(data,"#") == 0)
		{
			break;
		}
		int len = strlen(data);
		
		for(int i=0; i<len; i++)
		{
			if(data[i] >= 'A' && data[i] <= 'Z')
			{
				data[i] = data[i] + 32;
			}
			if(data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'u' || data[i] == 'o')
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}