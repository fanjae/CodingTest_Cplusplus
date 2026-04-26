#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int day=0,hour=0,min=0,sum=0;  
    int day2=11,hour2=11,min2=11;  
    int day3=0,hour3=0,min3=0;  
      
    scanf("%d %d %d",&day,&hour,&min);  
      
    if(day2 > day)  
    {  
        printf("-1\n");  
    }  
    else if((day2 == day) && (hour2 > hour))  
    {  
        printf("-1\n");  
    }  
    else if((day2 == day) && (hour2 >= hour) && (min2 > min))  
    {  
        printf("-1\n");  
    }  
    else  
    {  
        if(hour < hour2)  
        {  
            hour = hour + 24;  
            day = day - 1;  
        }  
        if(min < min2)  
        {  
            min = min + 60;  
            hour = hour - 1;  
        }  
  
        day3 = day - day2;  
        hour3 = hour - hour2;  
        min3 = min - min2;  
  
        if(day3==0)  
        {  
        }  
            else  
            {  
                sum = sum + (day3 * 1440);  
            }  
  
        if(hour3 == 0)  
        {  
        }  
            else  
            {  
                sum = sum + (hour3 * 60);  
            }  
        if(min3 == 0)  
        {  
        }  
            else  
            {  
                sum = sum + min3;  
            }  
        printf("%d\n",sum);  
    }  
  
}  