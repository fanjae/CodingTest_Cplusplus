#include <stdio.h>
#include <string.h>
char data[1000005];
char data2[1000005];
int main(void)
{
	int index = 0;
	int len;
	scanf("%s",data);
	len = strlen(data);
	
	int count = 1;
	int temp = 0;
	for(int i=len-1; i>=0; i--)
	{
		temp += (data[i] - '0') * count;
		if(count == 4)
		{
			data2[index] = (temp + '0');
			count = 1;
			temp = 0;
			index++;
		}
		else
		{
			count *= 2;
		}
	}
	if(count != 1)
	{
		data2[index] = temp + '0';
		index++;
	}
	for(int i=index-1; i>=0; i--)
	{
		printf("%c",data2[i]);
	}
}
		