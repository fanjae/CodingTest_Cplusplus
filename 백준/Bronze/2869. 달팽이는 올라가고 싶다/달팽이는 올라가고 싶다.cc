#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);
	
	printf("%.lf",ceil((double)(v-a)/(a-b)+1));
}