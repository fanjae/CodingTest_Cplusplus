#include <stdio.h>
int main()
{
    int n;
    int i;
    int a[10];
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d %d %d %d %d %d\n",1-a[1],1-a[2],2-a[3],2-a[4],2-a[5],8-a[6]);
}