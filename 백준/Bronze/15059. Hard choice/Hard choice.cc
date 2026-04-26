#include <stdio.h>
int main(void)
{
	int a,b,c;
	int d,e,f;
	int sum = 0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(d - a > 0)
	{
		sum += d - a;
	}
	if(e - b > 0)
	{
		sum += e - b;
	}
	if(f - c > 0)
	{
		sum += f - c;
	}
	printf("%d\n",sum);
}