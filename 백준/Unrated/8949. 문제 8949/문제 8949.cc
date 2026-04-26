#include <stdio.h>
#include <string.h>
int main(void)
{
	int a[8],b[8];
	int a_len,b_len;
	int max;
	char a_value[8];
	char b_value[8];
	
	scanf("%s %s",a_value,b_value);
	a_len = strlen(a_value);
	b_len = strlen(b_value);
	
	if(a_len > b_len)
	{
		max = a_len;
		for(int i=0; i<a_len; i++)
		{
			a[i] = a_value[i] - '0';
		}
		for(int i=0; i<a_len; i++)
		{
			if(i < a_len-b_len)
			{
				b[i] = 0;
			}
			else
			{
				b[i] = b_value[i-(a_len-b_len)] - '0';
			}
		}
	}
	else if(b_len > a_len)
	{
		max = b_len;
		for(int i=0; i<b_len; i++)
		{
			b[i] = b_value[i] - '0';
		}
		for(int i=0; i<b_len; i++)
		{
			if(i < b_len-a_len)
			{
				a[i] = 0;
			}
			else
			{
				a[i] = a_value[i-(b_len-a_len)] - '0';
			}
		}
	}
	else
	{
		max = a_len;
		for(int i=0; i<a_len; i++)
		{
			a[i] = a_value[i] - '0';
			b[i] = b_value[i] - '0';
		}
	}
	for(int i=0; i<max; i++)
	{
		printf("%d",a[i]+b[i]);
	}
}