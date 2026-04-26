#include <stdio.h>
int main(void)
{
	int a,b,c,d,p;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
	
	int x_value = 0;
	x_value = a * p;
	
	int y_value = b;
	if(c < p)
	{
		y_value += (p - c) * d; 
	}
	
	if(x_value < y_value)
	{
		printf("%d\n",x_value);
	}
	else
	{
		printf("%d\n",y_value);
	}
}