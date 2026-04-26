#include <stdio.h>
int main(void)
{
	int hour,min,sec;
	int hour2,min2,sec2;
	int result,result2,result3;
	scanf("%d:%d:%d",&hour,&min,&sec);
	scanf("%d:%d:%d",&hour2,&min2,&sec2);
	if(sec2 - sec < 0)
	{
		result3 = sec2 - sec + 60;
		min = min + 1;
	}
	else
	{
		result3 = sec2 - sec;
	}
	if(min2 - min < 0)
	{
		result2 = min2 - min + 60;
		hour = hour + 1;
	}
	else
	{
		result2 = min2 - min;
	}
	if(hour2 - hour < 0)
	{
		result= hour2 - hour + 24;
	}
	else
	{
      result = hour2 - hour;
   }
	
	printf("%02d:%02d:%02d\n",result,result2,result3);
}
	
		
	