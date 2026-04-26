#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int count=0;
		char data[15];
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=n; i<=m; i++)
		{
			sprintf(data,"%d",i);
			for(int j=0; j<strlen(data); j++)
			{
				if(data[j] == '0')
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}