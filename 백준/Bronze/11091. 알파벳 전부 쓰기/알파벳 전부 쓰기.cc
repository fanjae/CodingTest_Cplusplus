#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
		char data[105];
		int count[30]={0};
		int len;
		int ncount=0;
		gets(data);
		len = strlen(data);
		for(int i=0; i<len; i++)
		{
			if(data[i] >= 'a' && data[i] <= 'z')
			{
				count[data[i]-97]++;
				
			}
			else if(data[i] >= 'A' && data[i] <= 'Z')
			{
				count[data[i]-65]++;
			}
		}
		for(int i=0; i<26; i++)
		{
			if(count[i] > 0)
			{
				ncount++;
			}
		}
		if(ncount == 26)
		{
			printf("pangram\n");
		}
		else
		{
			printf("missing ");
			for(int i=0; i<26; i++)
			{
				if(count[i] == 0)
				{
					printf("%c",i+97);
				}
			}
			printf("\n");
		}
	}
}
				