#include <stdio.h>
#include <string.h>
int main()
{
	char data[8][15]={"000","001","010","011","100","101","110","111"};
	char foredata[8][15]={"0","1","10","11","100","101","110","111"};
	char oct[350000];
	scanf("%s",oct);
	int len = strlen(oct);
	for(int i=0; i<len; i++)
	{
		if(i == 0)
		{
			printf("%s",foredata[oct[i]-'0']);
		}
		else
		{
			printf("%s",data[oct[i]-'0']);
		}
	}
}
	