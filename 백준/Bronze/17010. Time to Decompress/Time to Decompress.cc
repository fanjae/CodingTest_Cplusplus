#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		char a;
		scanf("%d %c",&n,&a);
		for(int i=0; i<n; i++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
}