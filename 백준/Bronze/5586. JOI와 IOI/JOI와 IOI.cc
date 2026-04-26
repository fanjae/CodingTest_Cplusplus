#include <stdio.h>
#include <string.h>
int main()
{
	int count=0;
	int count2=0;
	char data[10005];
	scanf("%s",data);
	for(int i=0; i<strlen(data)-2; i++)
	{
		if(data[i] == 'J' && data[i+1] == 'O' && data[i+2] == 'I')
		{
			count++;
		}
		else if(data[i] == 'I' && data[i+1] == 'O' && data[i+2] == 'I')
		{
			count2++;
		}
	}
	printf("%d\n%d\n",count,count2);
}