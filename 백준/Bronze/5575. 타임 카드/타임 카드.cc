#include <stdio.h>
int main()
{
	int T=3;
	int hour,min,sec,hour2,min2,sec2;
	while(T--)
	{
		scanf("%d %d %d %d %d %d",&hour,&min,&sec,&hour2,&min2,&sec2);
		sec = sec2 - sec;
		if(sec < 0)
		{
			sec += 60;
			min2--;
		}
		min = min2 - min;
		if(min < 0)
		{
			min += 60;
			hour2--;
		}
		hour = hour2 - hour;
		printf("%d %d %d\n",hour,min,sec);
	}
}