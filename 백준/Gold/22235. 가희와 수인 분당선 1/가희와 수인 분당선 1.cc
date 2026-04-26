#include <stdio.h>
#include <algorithm>

using namespace std;

typedef struct my_time
{
	int hour;
	int minutes;
	int sec;
	int point;
}my_time;

typedef struct train_time
{
	short hour;
	short minutes;
	short sec;
	short start_number;
	short point_number;
	short end_number;
	short point_hour;
	short point_minutes;
	short point_sec;
	short end_hour;
	short end_minutes;
	short end_sec;
	short in_hour[70];
	short in_minutes[70];
	short in_sec[70];
}train_time;

my_time data;
train_time train_data[405];
int n;

short time_exception(int x)
{
	if(x == 211 || x == 223 || x == 226 || x == 239 || x == 251 || x == 257 || x == 267)
	{
		return 3;
	}
	else if(x == 221 || x == 222 || x == 246 || x == 250)
	{
		return 4;
	}
	else if(x == 248)
	{
		return 5;
	}
	else
	{
		return 0;
	}
}

bool compare(const struct train_time &dat1, const struct train_time &dat2)
{
	if(dat1.end_hour != dat2.end_hour)
	{
		return dat1.end_hour < dat2.end_hour;
	}
	else
	{
		if(dat1.end_minutes != dat2.end_minutes)
		{
			return dat1.end_sec < dat2.end_sec;
		}	
		return dat1.end_minutes < dat2.end_minutes;
	}
	
}
void train_cal()
{
	for(int i=0; i<n; i++)
	{
		short hour,minutes,sec;
		hour = train_data[i].hour;
		minutes = train_data[i].minutes;
		sec = train_data[i].sec;
		train_data[i].in_hour[train_data[i].start_number-210] = hour;
		train_data[i].in_minutes[train_data[i].start_number-210] = minutes;
		train_data[i].in_sec[train_data[i].start_number-210] = sec;		
		
		for(int j=train_data[i].start_number; j<train_data[i].end_number; j++)
		{
			if(j != train_data[i].end_number - 1) sec += 20;
			
			int temp;
			if((temp = time_exception(j+1)) != 0)
			{
				minutes += temp;
			}
			else
			{
				minutes += 2;	
			}
			if(minutes >= 60)
			{
				hour++;
				minutes -= 60;
			}
			if(sec >= 60)
			{
				minutes++;
				sec -= 60;
			}
			if(j + 1 == train_data[i].point_number)
			{
				train_data[i].point_hour = hour;
				train_data[i].point_minutes = minutes;
				train_data[i].point_sec = sec;
			}
			train_data[i].in_hour[j+1-210] = hour;
			train_data[i].in_minutes[j+1-210] = minutes;
			train_data[i].in_sec[j+1-210] = sec;
		}
		train_data[i].end_hour = hour;
		train_data[i].end_minutes = minutes;
		train_data[i].end_sec = sec;
	}
}
int main(void)
{
	
	char start_number[3];
	char end_number[3];
	char hour[2],minutes[2],sec[2];
	char temp;
	scanf("%1c%1c:%1c%1c:%1c%1c",&hour[0],&hour[1],&minutes[0],&minutes[1],&sec[0],&sec[1]);
	
	data.hour = (hour[0] - '0') * 10 + (hour[1] - '0');
	data.minutes = (minutes[0] - '0') * 10 + (minutes[1] - '0');
	data.sec = (sec[0] - '0') * 10 + (sec[1] - '0');
	
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n; i++)
	{
		scanf("K%1c%1c%1c%1cK%1c%1c%1c%1c%1c%1c:%1c%1c",&start_number[0],&start_number[1],&start_number[2],&temp,&end_number[0],&end_number[1],&end_number[2],&temp,&hour[0],&hour[1],&minutes[0],&minutes[1]);
		
		train_data[i].hour = (hour[0] - '0') * 10 + (hour[1] - '0');
		train_data[i].minutes = (minutes[0] - '0') * 10 + (minutes[1] - '0');	
		train_data[i].sec = 0;
		
		train_data[i].start_number = (start_number[0] - '0') * 100 + (start_number[1] - '0') * 10 + (start_number[2] - '0');
		train_data[i].point_number = 225;
		train_data[i].end_number = (end_number[0] - '0') * 100 + (end_number[1] - '0') * 10 + (end_number[2] - '0');
		getchar();
	}
	train_cal();
	//sort(train_data,train_data+n,compare);
	
	int target = 0;
	data.point = 225;
	while(target < n)
	{
		if(data.point == 272)
		{
			break;
		}
		if(data.hour < train_data[target].in_hour[data.point-210])
		{
			
			data.hour = train_data[target].end_hour;
			data.minutes = train_data[target].end_minutes;
			data.sec = train_data[target].end_sec;
			data.point = train_data[target].end_number;	
			target++;
			continue;
		}
		else if(data.hour == train_data[target].in_hour[data.point-210])
		{
			if(data.minutes < train_data[target].in_minutes[data.point-210])
			{
				data.hour = train_data[target].end_hour;
				data.minutes = train_data[target].end_minutes;
				data.sec = train_data[target].end_sec;
				data.point = train_data[target].end_number;	
				target++;	
				continue;			
			}
			else if(data.minutes == train_data[target].in_minutes[data.point-210])
			{
				if(train_data[target].in_sec[data.point-210] + 19 > 60)
				{
					int temp_hour = train_data[target].end_hour;
					int temp_minutes = train_data[target].end_minutes + 1;
					int temp_sec = train_data[target].end_sec - 60;		
					if(data.minutes < temp_minutes)
					{
						data.hour = train_data[target].end_hour;
						data.minutes = train_data[target].end_minutes;
						data.sec = train_data[target].end_sec;
						data.point = train_data[target].end_number;	
						target++;	
						continue;			
					}	
					else if(data.minutes == temp_minutes)
					{
						if(data.sec < temp_sec)
						{
							data.hour = train_data[target].end_hour;
							data.minutes = train_data[target].end_minutes;
							data.sec = train_data[target].end_sec;
							data.point = train_data[target].end_number;	
							target++;	
							continue;	
						}
					}
				}
				else if(data.sec < train_data[target].in_sec[data.point-210] + 19)
				{
					data.hour = train_data[target].end_hour;
					data.minutes = train_data[target].end_minutes;
					data.sec = train_data[target].end_sec;
					data.point = train_data[target].end_number;	
					target++;	
					continue;			
				}
			}
			target++;
			continue;
		}
		else
		{
			target++;
		}
	}
	if(data.point != 272 || data.hour >= 24)
	{
		printf("-1\n");
	}
	else
	{
		printf("%02d:%02d:%02d\n",data.hour,data.minutes,data.sec);
	}
}
	