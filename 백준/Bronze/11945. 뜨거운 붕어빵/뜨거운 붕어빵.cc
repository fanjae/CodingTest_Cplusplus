#include <stdio.h>
int main()
{
	char data[15][15];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%s",data[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=m-1; j>=0; j--)
		{
			printf("%c",data[i][j]);
		}
		printf("\n");
	}
}
	