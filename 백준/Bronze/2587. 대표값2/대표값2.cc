#include <stdio.h>
int main(void)
{
    int a[10];
    int i,j;
    int temp,sum=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    for(i=1;i<=4;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("%d\n",sum/5);
    printf("%d\n",a[3]);
}