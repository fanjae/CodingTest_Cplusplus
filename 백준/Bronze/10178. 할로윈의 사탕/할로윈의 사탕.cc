#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int m,c;
		scanf("%d %d",&m,&c);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n",m/c,m%c);
	}
}