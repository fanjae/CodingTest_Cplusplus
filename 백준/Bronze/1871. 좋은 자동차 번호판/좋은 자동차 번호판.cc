// A 65
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int value;
		int value2;
		int su = 1000;
		value = value2 = 0;
		char data[105];	
		scanf("%s",data);
		value = (data[0] - 65) * 676 + (data[1] - 65) * 26 + (data[2] - 65) * 1;
		for(int i=4; i<8; i++)
		{
			value2 += (data[i] - '0') * su;
			su /= 10;
		}
		if(abs(value-value2) <= 100)
		{
			printf("nice\n");
		}
		else
		{
			printf("not nice\n");
		}
	}
}
	