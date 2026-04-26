#include <stdio.h>
int main()
{
    int n,k;
    int i,c=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c==k)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    if(c < k)
    {
        printf("0");
    }
}