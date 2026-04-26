#include <stdio.h>
#include <string.h>
char data[1000005];
char data2[1000005];
char buffer[1000005];
char buffer2[1000005];
char result[1000005];
int main(void)
{
	int len,len2;
	int index = 0;
	int type = 0;
	int max;
	scanf("%s %s",data,data2);
	len = strlen(data);
	len2 = strlen(data2);	
	
	if(len >= len2)
	{
		type = 1;
		max = len;
		index = len2;
		for(int i=len; i>=1; i--)
		{
			buffer[i] = data[i-1];	
		}
		buffer[len+1] = 0;
		buffer[0] = '0';
		for(int i=len; i>=len-len2+1; i--)
		{
			buffer2[i] = data2[--index];
		}
		for(int i=len-len2; i>=1; i--)
		{
			buffer2[i] = '~';
		}
		buffer2[len+1] = 0;
		buffer2[0] = '0';
	}
	else
	{
		type = 2;
		max = len2;
		index = len;
		for(int i=len2; i>=1; i--)
		{
			buffer2[i] = data2[i-1];	
		}
		buffer2[len2+1] = 0;
		buffer2[0] = '0';
		for(int i=len2; i>=len2-len+1; i--)
		{
			buffer[i] = data[--index];
		}
		for(int i=len2-len; i>=1; i--)
		{
			buffer[i] = '~';
		}
		buffer[len2+1] = 0;
		buffer[0] = '0';
	}
	
	result[0] = '0';
	if(type == 1)
	{
		for(int i=max; i>0; i--)
		{
			if(buffer[i] != '~' && buffer2[i] != '~') 
			{
				result[i] += buffer[i] + (buffer2[i] - '0');
			}
			else
			{
				result[i] += buffer[i];
			}
			
			if(result[i] > '9')
			{
				result[i] = '0' + (result[i] - '9' - 1);
				result[i-1]++;
			}
		}
	}
	else
	{
		for(int i=max; i>0; i--)
		{
			if(buffer[i] != '~' && buffer2[i] != '~') 
			{
				result[i] += buffer2[i] + (buffer[i] - '0');
			}
			else
			{
				result[i] += buffer2[i];
			}
			
			if(result[i] > '9')
			{
				result[i] = '0' + (result[i] - '9' - 1);
				result[i-1]++;
			}
		}	
	}
	for(int i=0; i<=max; i++)
	{
		if(i == 0 && result[i] == '0')
		{
			continue;
		}
		printf("%c",result[i]);
	}
}