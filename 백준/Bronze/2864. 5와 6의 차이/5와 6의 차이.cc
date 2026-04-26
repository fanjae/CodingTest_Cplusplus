#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char a[10];
	char b[10];
	scanf("%s",a);
	scanf("%s",b);
	
	
	int len = strlen(a);
	int len2 = strlen(b);
	for(int i=0; i<len; i++)
	{
		if(a[i] == '5')
		{
			a[i] = '6';
		}
	}
	for(int i=0; i<len2; i++)
	{
		if(b[i] == '5')
		{
			b[i] = '6';
		}
	}
	
	int a_value = atoi(a);
	int b_value = atoi(b);
	
	int max = a_value + b_value;
	for(int i=0; i<len; i++)
	{
		if(a[i] == '6')
		{
			a[i] = '5';
		}
	}
	for(int i=0; i<len2; i++)
	{
		if(b[i] == '6')
		{
			b[i] = '5';
		}
	}	
	a_value = atoi(a);
	b_value = atoi(b);	
	int min = a_value + b_value;
	
	printf("%d %d\n",min,max);
	
}