#include <stdio.h>
int main(void)
{
    int m,n;
    int i,j,count;
    int sum=0;
    int min=10005;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        count = 0;
        for(j=1;j<=i;j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            sum += i;
            if(i < min)
            {
                min = i;
            }
        }
    }
    if(sum == 0)
    {
    	printf("-1");
    }
    else
    {
    	printf("%d\n",sum);
    	printf("%d\n",min);
    }
}