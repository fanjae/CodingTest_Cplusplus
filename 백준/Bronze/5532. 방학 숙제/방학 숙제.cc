#include <stdio.h>
int main(void)
{
	int count=0;
	int n;
	int a,b,c,d;
	scanf("%d",&n);
	scanf("%d %d %d %d",&a,&b,&c,&d);
	while(a > 0 || b > 0)
	{
		if(a > 0)
		{
			a -= c;
		}
		if(b > 0)
		{
			b -= d;
		}
		count++;
	}
	printf("%d",n-count);
}