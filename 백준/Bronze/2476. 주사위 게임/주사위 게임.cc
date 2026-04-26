#include <stdio.h>  
int main()  
{  
    int a[100000][3]={0},i,j,n,x[100000]={0},max=0;  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        for(j=0;j<3;j++)  
            scanf("%d",&a[i][j]);  
    }  
    for(i=0;i<n;i++)  
    {  
        /* 세 개 모두 같은 경우 */  
        if(a[i][0]==a[i][1] && a[i][1]==a[i][2])  
            x[i]=10000+1000*a[i][0];  
        /* 셋 중 두개가 같은 경우 */  
        else if(a[i][0]==a[i][1])  
            x[i]=1000+100*a[i][0];  
        else if(a[i][0]==a[i][2])  
            x[i]=1000+100*a[i][0];  
        else if(a[i][1]==a[i][2])  
            x[i]=1000+100*a[i][1];  
        /* 모두 다 다른 경우 */  
        else  
        {   
            for(j=0;j<3;j++)  
            {  
                if(a[i][j]>max)  
                    max=a[i][j];  
            }  
            x[i]=100*max;  
        }  
    }  
    max=0;  
    for(i=0;i<n;i++)  
    {  
        if(x[i]>max)  
            max=x[i];  
    }  
    printf("%d\n",max);  
}