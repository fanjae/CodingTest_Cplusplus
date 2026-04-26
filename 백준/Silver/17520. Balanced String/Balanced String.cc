#include <stdio.h>
#include <math.h>
int main(void)
{
	int result = 1;
	int n;
	int g;
	scanf("%d",&n);
	g = ceil((double)n / 2);
	for(int i=1; i<=g; i++)
	{
		result *= 2;
		result %= 16769023;
	}
	printf("%d",result);
}