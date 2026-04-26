#include <stdio.h>
int main(void)
{
    long long int a[95]={0,1,1};
    long long int i;
   	long long int n;
    scanf("%lld",&n);
    for(i=3;i<=n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("%lld",a[n]);
}