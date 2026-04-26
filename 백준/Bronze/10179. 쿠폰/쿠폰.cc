#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		double value;
		scanf("%lf",&value);
		printf("$%.2lf\n",value*0.8);
	}
}