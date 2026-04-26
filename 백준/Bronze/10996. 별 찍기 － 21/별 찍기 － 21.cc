#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n*2; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j % 2 == 0 && i % 2 == 1)
			{
				printf("*");
			}
			else if(j % 2 == 1 && i % 2 == 1)
			{
				printf(" ");
			}
			if(j % 2 == 0 && i % 2 == 0)
			{
				printf(" ");
			}
			else if(j % 2 == 1 && i % 2 == 0)
			{
				printf("*");
			}			
		}
		printf("\n");
	}
}