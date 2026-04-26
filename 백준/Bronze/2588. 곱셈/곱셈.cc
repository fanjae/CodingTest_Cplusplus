#include <stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d",&x,&y);
    a=y%10*x;
    b=y/10%10*x;
    c=y/100*x;
    d=a+10*b+c*100;
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}