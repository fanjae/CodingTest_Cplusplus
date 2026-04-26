#include <stdio.h>
int main(void)
{
	while(1)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)
		{
			break;
		}
		else
		{
			printf("%d\n",n+m);
		}
	}
}