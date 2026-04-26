#include <stdio.h>
int main()
{
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int x=1,y=1;
	int mod=1;
	int sx,sy;
	scanf("%d %d",&sx,&sy);
	while(sx > x || sy > y)
	{
		if(sx == x && sy == y)
		{
			break;
		}
		y++;
		if(y > day[x-1])
		{
			y = 1;
			x++;
		}
		mod = (mod % 7) + 1;
	}
	switch(mod)
	{
		case 1:
		{
			printf("MON\n");
			break;
		}
		case 2:
		{
			printf("TUE\n");
			break;
		}
		case 3:
		{
			printf("WED\n");
		   break;
		}
		case 4:
		{
			printf("THU\n");
			break;
		}
		case 5:
		{
			printf("FRI\n");
			break;
		}
		case 6:
		{
			printf("SAT\n");
		   break;
		}
		case 7:
		{
			printf("SUN\n");
			break;
		}
	}
}