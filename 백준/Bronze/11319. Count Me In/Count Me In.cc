#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
		char data[1005];
		int len;
		int consonants = 0;
		int vowels=0;
		gets(data);
		len = strlen(data);
		for(int i=0; i<len; i++)
		{
			if(data[i] == 'a' || data[i] == 'A' || data[i] == 'e' || data[i] == 'E' || data[i] == 'I' || data[i] == 'i' || data[i]=='O' || data[i] == 'o' || data[i] == 'u' || data[i] == 'U')
			{
				vowels++;
			}
			else if(data[i] == ' ' || data[i] == '\n')
			{
				continue;
			}
			else
			{
				consonants++;
			}
		}
		printf("%d %d\n",consonants,vowels);
	}
}