#include<stdio.h>    
    
int main()    
{    
    int a[2010][4];    
    int sum[2010] = {0};    
    int score[2010][4] = {0};    
    int n;    
    int i,j;    
    int m=1;    
    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=3;j++)    
        {    
            scanf("%d",&a[i][j]);    
        }    
    }    
    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=n;j++)    
        {    
            if(a[i][1] == a[j][1])    
            {    
                score[i][1]++;    
            }    
        }    
    }    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=n;j++)    
        {    
            if(a[i][2] == a[j][2])    
            {    
                score[i][2]++;    
            }    
        }    
    }    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=n;j++)    
        {    
            if(a[i][3] == a[j][3])    
            {    
                score[i][3]++;    
            }    
        }    
    }    
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=3;j++)    
        {    
            if(score[i][j] == 1)    
            {    
                sum[i] += a[i][j];    
            }    
        }    
    }    
    
    for(i=1;i<=n;i++)    
    {    
        printf("%d\n",sum[i]);    
    }    
    return 0;    
} 