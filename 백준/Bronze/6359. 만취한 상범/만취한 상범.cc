#include <stdio.h>
#include <math.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",(int)sqrt(n));
	}
}