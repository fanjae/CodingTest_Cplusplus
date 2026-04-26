#include <stdio.h>
#include <string.h>
char data[105];
char data2[105];
char op[105];
char result[105];
int main()
{
	int len,len2;
	int resultlen;
	int min,max;
	
	scanf("%s",data);
	len = strlen(data);
	scanf("%s",op);
	scanf("%s",data2);
	len2 = strlen(data2); 
	if(strcmp(op,"*")==0)
	{
		if(len == 1 || len2 == 1)
		{
			resultlen = len * len2;
		}
		else
		{
			resultlen = len + len2 - 1;
		}
		for(int i=0; i<resultlen; i++)
		{
			if(i == 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
	if(strcmp(op,"+")==0)
	{
		int set = 0;
		if(len == len2)
		{
			set = 1;
			resultlen = len;
		}
		else if(len > len2)
		{
			set = 2;
			resultlen = len;
		}
		else if(len < len2)
		{
			set = 3;
			resultlen = len2;
		}
		for(int i=0; i<resultlen; i++)
		{
			if(i == 0 && set == 1)
			{
				printf("2");
			}
			else if(i == 0 && set == 2)
			{
				printf("1");
			}
			else if(i == 0 && set == 3)
			{
				printf("1");
			}
			else if(set == 2 && i == resultlen-len2)
			{
				printf("1");
			}
			else if(set == 3 && i == resultlen-len)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}	
   }
}
