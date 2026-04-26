#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,T;
	scanf("%d\n",&T);
	i = 1;
	while(i <= T)
	{
		int len;
		char data[55];
		gets(data);
		
		len = strlen(data);
		printf("String #%d\n",i);
		for(int i = 0; i < len; i++)
		{
			if(data[i] == 90)
			{
				printf("%c",'A');
			}
			else
			{
				printf("%c",data[i]+1);
			}
		}
		printf("\n\n");
		i++;
	}
}