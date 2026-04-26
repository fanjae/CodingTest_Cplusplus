#include <stdio.h>  
#include <stdlib.h>  
  
int a[1005][1005],b[1005][1005];  
int n,i,j,max=0;  
int main()  
{  
    scanf("%d",&n);  
      
      
    a[0][0]=0;  
    b[0][0]=0;  
    for(i=1;i<=n;i++)  
    {  
        a[i][0]=0;  
        a[0][i]=0;  
        b[i][0]=0;  
        b[0][i]=0;  
    }   
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=i;j++)  
        {  
            scanf("%d",&a[i][j]);  
            b[i][j]=0;  
        }  
    }  
    b[1][1] = a[1][1];  
    for(i=2;i<=n;i++)  
    {  
        b[i][1] = b[i-1][1] + a[i][1];  
    }  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=n;j++)  
        {  
           if(b[i+1][j] < b[i][j] + a[i+1][j])  
           {  
                b[i+1][j] = b[i][j] + a[i+1][j];  
           }  
           if(b[i+1][j+1] < b[i][j] + a[i+1][j+1])  
           {  
                b[i+1][j+1] = b[i][j] + a[i+1][j+1];  
           }  
        }  
    }  
    for(i=1;i<=n;i++)  
    {  
        if(max < b[n][i])  
        {  
            max = b[n][i];  
        }  
    }  
    printf("%d",max);  
} 