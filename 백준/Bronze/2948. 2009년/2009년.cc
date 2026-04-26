#include <stdio.h>
int main()
{
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x=1,y=1;
    int mod=1;
    int sx,sy;
    scanf("%d %d",&sy,&sx);
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
            printf("Thursday\n");
            break;
        }
        case 2:
        {
            printf("Friday\n");
            break;
        }
        case 3:
        {
            printf("Saturday\n");
           break;
        }
        case 4:
        {
            printf("Sunday\n");
            break;
        }
        case 5:
        {
            printf("Monday\n");
            break;
        }
        case 6:
        {
            printf("Tuesday\n");
           break;
        }
        case 7:
        {
            printf("Wednesday\n");
            break;
        }
    }
}