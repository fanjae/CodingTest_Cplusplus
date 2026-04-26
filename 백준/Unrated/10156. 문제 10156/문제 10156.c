#include <stdio.h>
int main(void)
{
	int k,n,m;
	scanf("%d %d %d",&k,&n,&m);
	if(k*n <= m)
	{
		printf("0");
	}
	else
	{
		printf("%d",k*n-m);
	}
}