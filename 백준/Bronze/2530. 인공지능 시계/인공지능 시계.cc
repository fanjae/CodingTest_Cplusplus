#include <stdio.h>
int main()
{
    int h,s,c,su;
    scanf("%d %d %d",&h,&s,&c);
    scanf("%d",&su);
    c = c + su;
    while(c >= 60)
    {
        c = c - 60;
        s = s + 1;
    }
    while(s >= 60)
    {
        s = s - 60;
        h = h + 1;
    }
    while(h >= 24)
    {
        h = h - 24;
    }
    printf("%d %d %d",h,s,c);
}