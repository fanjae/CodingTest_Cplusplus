#include <stdio.h>
int main()
{
	int T;
	int n,m;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&m);
		printf("%d %d\n",m*2-n,m-(m*2-n));
	}
}