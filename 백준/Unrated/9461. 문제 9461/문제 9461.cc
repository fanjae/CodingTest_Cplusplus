#include <stdio.h>
int main()
{
    long long int data[105]={0,1,1,1,2,2};
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%lld",&n);
        for(int i=6; i<=n; i++)
        {
            data[i] = data[i-2] + data[i-3];
        }
        printf("%lld\n",data[n]);
    }
}