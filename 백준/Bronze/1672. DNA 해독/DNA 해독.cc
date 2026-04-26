#include <stdio.h>
#include <string.h>

char data[1000005];
char test(char a, char b)
{
	char temp;
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	if(a == b)
	{
		return a;	
	}
	
	if(a == 'A')
	{
		if(b == 'C')
		{
			return 'A';
		}
		if(b == 'G')
		{
			return 'C';
		}
		if(b == 'T')
		{
			return 'G';
		}
	}
	if(a == 'C')
	{
		if(b == 'G')
		{
			return 'T';
		}
		if(b == 'T')
		{
			return 'G';
		}
	}
	if(a == 'G')
	{
		if(b == 'T')
		{
			return 'A';
		}
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	scanf("%s",data);
	
	for(int i=n-1; i>=1; i--)
	{
		char value; 
		value = test(data[i-1],data[i]);
		data[i] = 0;
		data[i-1] = value;
	}
	printf("%s\n",data);
}
	
	
