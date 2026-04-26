#include <stdio.h>
int main()
{
    int a,b,c;
    int su1,su2;
    scanf("%d %d %d",&a,&b,&c);
    su1 = c - b - 1;
    su2 = b - a - 1;
    if(su1 >= su2)
    {
        printf("%d",su1);
    }
    else
    {
        printf("%d",su2);
    }
}