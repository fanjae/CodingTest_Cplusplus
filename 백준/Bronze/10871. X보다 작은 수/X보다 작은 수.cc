#include <stdio.h>
int main()
{
	int n,u,x;
	scanf("%d %d",&n,&x);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&u);
		if(u < x)
		{
			printf("%d ",u);
		}
	}
}