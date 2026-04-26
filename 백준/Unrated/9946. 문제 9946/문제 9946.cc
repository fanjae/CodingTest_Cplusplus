//A 65 a 97
#include <stdio.h>
#include <string.h>
int main()
{
	int num=0;
	while(1)
	{
		int flag = 1;
		int count[26]={0};
		int count2[26]={0};
		char data[1005];
		char data2[1005];
		gets(data);
		gets(data2);
		if(strcmp(data,"END") == 0 && strcmp(data2,"END") == 0)
		{
			break;
		}
		for(int i=0; i<strlen(data); i++)
		{
			count[data[i]-97]++;	
		}
		for(int i=0; i<strlen(data2); i++)
		{
			count2[data2[i]-97]++;
		}
		for(int i=0; i<26; i++)
		{
			if(count[i] != count2[i])
			{
				flag = 0;
			}
		}
		printf("Case %d: ",++num);
		if(flag == 1)
		{
			printf("same");
		}
		else
		{
			printf("different");
		}
		printf("\n");
	}
}