#include <stdio.h>
struct time
{
	int hour;
	int minutes;
	int sec;
};
int cal_value(struct time data)
{
	return data.hour * 10000 + data.minutes * 100 + data.sec * 1;
}
int main(void)
{
	char data[15];
	char data2[15];
	
	time start;
	time end;
	while(scanf("%s %s",data,data2) != EOF)
	{
		sscanf(data,"%2d:%2d:%2d",&start.hour,&start.minutes,&start.sec);
		sscanf(data2,"%2d:%2d:%2d",&end.hour,&end.minutes,&end.sec);
		
		int cnt = 0;
		
		int temp_start = cal_value(start);
		int temp_end = cal_value(end);
		if(temp_start > temp_end)
		{
			while(temp_start <= 235959)
			{
				if(temp_start % 3 == 0)
				{
					cnt++;
				}
				start.sec++;
				if(start.sec >= 60)
				{
					start.sec -= 60;
					start.minutes++;
				}
				if(start.minutes >= 60)
				{
					start.minutes -= 60;
					start.hour++;
				}
				temp_start = cal_value(start);
			}
			temp_start = 0;
			start.hour = start.minutes = start.sec = 0;
			
			while(temp_start <= temp_end)
			{
				if(temp_start % 3 == 0)
				{
					cnt++;
				}
				start.sec++;
				if(start.sec >= 60)
				{
					start.sec -= 60;
					start.minutes++;
				}
				if(start.minutes >= 60)
				{
					start.minutes -= 60;
					start.hour++;
				}
				temp_start = cal_value(start);
			}
		}
		else
		{
			while(temp_start <= temp_end)
			{
				if(temp_start % 3 == 0)
				{
					cnt++;
				}
				start.sec++;
				if(start.sec >= 60)
				{
					start.sec -= 60;
					start.minutes++;
				}
				if(start.minutes >= 60)
				{
					start.minutes -= 60;
					start.hour++;
				}
				temp_start = cal_value(start);
			}
		}
		printf("%d\n",cnt);
	}
}
	