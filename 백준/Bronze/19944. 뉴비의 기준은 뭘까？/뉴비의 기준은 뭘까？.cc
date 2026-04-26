#include <stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(m <= 2)
	{
		printf("NEWBIE!\n");
	}
	else if(m <= n)
	{
		printf("OLDBIE!\n");
	}
	else
	{
		printf("TLE!\n");
	}
}