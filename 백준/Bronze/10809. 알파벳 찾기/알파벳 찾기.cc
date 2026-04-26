#include <stdio.h>
#include <string.h>
int main()
{
	char data[105];
	char c='a';
	scanf("%s",data);
	for(int i=0; i<26; i++)
	{
		int find=0;
		for(int j=0; j<strlen(data); j++)
		{
			if(data[j] == (c + i))
			{
				printf("%d ",j);
				find = 1;
				break;
			}
		}
		if(find == 0)
		{
			printf("-1 ");
		}
	}
}