#include <stdio.h>
int main()
{
	char data[105][105];
	int n;
	int method;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%c",&data[i][j]);
		}
		getchar();
	}
	scanf("%d",&method);
	if(method == 1)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%c",data[i][j]);
			}
			printf("\n");
		}
	}
	else if(method == 2)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=n-1; j>=0; j--)
			{
				printf("%c",data[i][j]);
			}
			printf("\n");
		}
	}
	else if(method == 3)
	{
		for(int i=n-1; i>=0; i--)
		{
			for(int j=0; j<n; j++)
			{
				printf("%c",data[i][j]);
			}
			printf("\n");
		}
	}
}