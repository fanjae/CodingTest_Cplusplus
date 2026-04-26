#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[100];
	int i,n;
	int j,index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&index,a);
		for(j=0;j<=strlen(a)-1;j++)
		{
			if(j == index-1)
			{
				
			}
			else
			{
				printf("%c",a[j]);
			}
		}
		printf("\n");
	}
}