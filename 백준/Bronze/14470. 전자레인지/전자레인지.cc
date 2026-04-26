#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,d,e;
	int time_sum = 0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a < 0)
	{
		time_sum += abs(a-0) * c;
		a = 0;
	}
	if(a == 0)
	{
		time_sum += d;
	}
	time_sum += (b - a) * e;
	printf("%d\n",time_sum);
}