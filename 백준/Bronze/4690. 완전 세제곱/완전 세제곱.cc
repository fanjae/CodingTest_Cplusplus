#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	for(int a=2; a<=100; a++)
	{
		for(int b=2; b<=a; b++)
		{
			for(int c=b+1; c<=a; c++)
			{
				for(int d=c+1; d<=a; d++)
				{
					int value,value2,value3,value4;
					value = a * a * a;
					value2 = b * b * b;
					value3 = c * c * c;
					value4 = d * d * d;
					if(value == (value2 + value3 + value4))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}
	}
}