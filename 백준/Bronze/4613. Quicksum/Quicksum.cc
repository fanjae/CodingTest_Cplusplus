// A 65
#include <stdio.h>
#include <string.h>
int main()
{
	char data[1005];
	while(strcmp(data,"#") != 0)
	{
		int sum = 0;
		gets(data);
		if(strcmp(data,"#") == 0)
		{
			break;
		}
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] >= 'A' && data[i] <= 'Z')
			{
				sum = sum + (data[i] - 64) * (i + 1);
			}
		}
		printf("%d\n",sum);
	}
}