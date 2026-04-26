#include <stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n > m)
	{
		printf(">");
	}
	else if(n == m)
	{
		printf("==");
	}
	else
	{
		printf("<");
	}
}