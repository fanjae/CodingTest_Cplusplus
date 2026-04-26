#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		char data[105];
		scanf("%d",&n);
		scanf("%s",data);
		for(int i=0; i<strlen(data);i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%c",data[i]);
			}
		}
		printf("\n");
	}
}