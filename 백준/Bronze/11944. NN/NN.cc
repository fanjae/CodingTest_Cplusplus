#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char data[10];
	int n;
	int m;
	scanf("%s",data);
	n = atoi(data);
	scanf("%d",&m);
	if((n * strlen(data)) < m)
	{
		for(int i=0; i<n; i++)
		{
			printf("%s",data);
		}
	}
	else
	{
		for(int i=0; i<m/strlen(data); i++)
		{
			printf("%s",data);
		}
		for(int i=0; i<m%strlen(data); i++)
		{
			printf("%c",data[i]);
		}
	}
}