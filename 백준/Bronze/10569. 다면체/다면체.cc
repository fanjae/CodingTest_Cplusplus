#include <stdio.h>
int main()
{
	int T;
	int V,E;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&V,&E);
		printf("%d\n",(V-E-2)*-1);
	}
}