#include <stdio.h>
int main(void)
{
    int x[4];
    int y[4];
    int i,j;
    int su = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(x[i] == x[j])
            {
                su = x[i];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        if(x[i] != su)
        {
            x[3] = x[i];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(y[i] == y[j])
            {
                su = y[i];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        if(y[i] != su)
        {
            y[3] = y[i];
        }
    }
    printf("%d %d\n",x[3],y[3]);
}