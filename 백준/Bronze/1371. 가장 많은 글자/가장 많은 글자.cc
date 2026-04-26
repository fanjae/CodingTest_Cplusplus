#include <stdio.h>
#include <string.h>
int main()
{
	int max = 0;
	int count[26]={0};
	char data[105];
	while(scanf("%s",data) != EOF)
	{
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] >= 'a' && data[i] <= 'z')
			{
				count[data[i]-97]++;
			}
		}
	}
	for(int i=0; i<26; i++)
	{
		if(max < count[i])
		{
			max = count[i];
		}
	}
	for(int i=0; i<26; i++)
	{
		if(max == count[i])
		{
			printf("%c",i+97);
		}
	}
}