#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	int max = 0;
	char data[15];
	scanf("%d",&n);
	for(int i=n; i>=4; i--)
	{
		int flag = 1;
		sprintf(data,"%d",i);
		for(int j=0; j<strlen(data); j++)
		{
			if(data[j] != '4' && data[j] != '7')
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			max = i;
			printf("%d\n",max);
			break;
		}
	}
}