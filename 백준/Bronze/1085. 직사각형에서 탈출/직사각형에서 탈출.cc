#include <stdio.h>
#include <math.h>
int main(void)
{
	int x,y,w,h;
	int min = 1005;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	if(min > abs(x-0))
	{
		min = abs(x-0);
	}
	if(min > abs(y-0))
	{
		min = abs(y-0);
	}
	if(min > abs(w-x))
	{
		min = abs(w-x);
	}
	if(min > abs(h-y))
	{
		min = abs(h-y);
	}
	printf("%d\n",min);
}