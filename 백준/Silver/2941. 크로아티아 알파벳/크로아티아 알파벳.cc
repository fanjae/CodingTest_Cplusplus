#include <stdio.h>
#include <string.h>
char data[105];
int main()
{
	int count=0;
	int len;
	scanf("%s",data);
	len = strlen(data);
	for(int i=0; i<len; i++)
	{
		if(i < len-1 && (data[i] == 'c' && data[i+1] == '='))
		{
			count++;
			i++;
		}
		else if(i < len-1 && (data[i] == 'c' && data[i+1] == '-'))
		{
			count++;
			i++;
		}
		else if(i < len-2 && (data[i] == 'd' && data[i+1] == 'z' && data[i+2] == '='))
		{
			count++;
			i+=2;
		}
		else if(i < len-1 && (data[i] == 'd' && data[i+1] == '-'))
		{
			count++;
			i++;
	   }
		else if(i < len-1 && (data[i] == 'l' && data[i+1] == 'j'))
		{
			count++;
			i++;
		}
		else if(i < len-1 && (data[i] == 'n' && data[i+1] == 'j'))
		{
			count++;
		   i++;
		}
		else if(i < len-1 && (data[i] == 's' && data[i+1] == '='))
		{
			count++;
			i++;
		}
		else if(i < len-1 && (data[i] == 'z' && data[i+1] == '='))
		{
			count++;
			i++;
		}
		else
		{
			count++;
		}
	}
	printf("%d\n",count);
}