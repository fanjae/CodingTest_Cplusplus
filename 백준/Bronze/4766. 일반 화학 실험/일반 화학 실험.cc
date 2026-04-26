#include <stdio.h>
int main()
{
	int su=0;
	double temp;
	double n;
	while(n != 999)
	{	
		scanf("%lf",&n);
		su++;
		if(n == 999)
		{
			break;
		}
		if(su == 1)
		{
			temp = n;
		}
		else
		{
			printf("%.2f\n",n-temp);
			temp = n;
		}
	}
}