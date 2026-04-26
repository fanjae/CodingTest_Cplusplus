#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	int min=105;
	scanf("%d\n",&n);
	char data[55][105];
	for(int i=0; i<n; i++)
	{
		gets(data[i]);
	}
	int len = strlen(data[0]);
	for(int j=0; j<len; j++)
	{
		int count=1;
		for(int i=1; i<n; i++)
		{
			if(data[0][j] == data[i][j])
			{
				count++;
			}
		}
		if(count == n)
		{
			printf("%c",data[0][j]);
		}
		else
		{
			printf("?");
		}
	}
			
}