#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        int sum = 0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            if(i % 2 == 1) sum += i;
        }
        printf("%d\n",sum);
    }
}