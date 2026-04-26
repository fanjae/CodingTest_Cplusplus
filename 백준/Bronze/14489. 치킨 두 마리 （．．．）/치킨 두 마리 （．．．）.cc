#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	
	if(a+b < (c * 2))
	{
		printf("%d\n",a+b);
	}
	else
	{
		printf("%d\n",(a+b)-c*2);
	}
}