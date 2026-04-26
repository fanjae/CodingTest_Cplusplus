#include <stdio.h>
int main(void)
{
    int count = 0;
    float a,b,c,d;
    float max;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    max = a / c + b / d;
    if(max < c / d + a / b)
    {
        max = c / d + a / b;
        count = 1;
    }
    if(max <  d / b + c / a)
    {
        max = d / b + c / a;
        count = 2;
    }
    if(max <  b / a + d / c)
    {
        max = b / a + d / c;
        count = 3;
    }
    printf("%d\n",count);
     
}