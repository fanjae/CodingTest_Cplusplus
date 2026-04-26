#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			printf("=");
		}
		printf("\n");
	}
}