#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		double n;
		char data[15];
		scanf("%lf %s",&n,data);
		if(strcmp(data,"kg")==0)
		{
			printf("%.4lf lb\n",n*2.2046);
		}
		else if(strcmp(data,"l")==0)
		{
			printf("%.4lf g\n",n*0.2642);
		}
		else if(strcmp(data,"lb")==0)
		{
			printf("%.4lf kg\n",n*0.4536);
		}
		else if(strcmp(data,"g")==0)
		{
			printf("%.4lf l\n",n*3.7854);
		}
	}
}