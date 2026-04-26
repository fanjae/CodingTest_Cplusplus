#include <stdio.h>  
int main(void)  
{  
    int a[7][7]={0};  
    int su,count,i,j,k;  
  
    for(i=1;i<=5;i++)  
    {  
        for(j=1;j<=5;j++)  
        {  
            scanf("%d",&a[i][j]);  
        }  
    }  
    for(k=1;k<=25;k++)  
    {  
        scanf("%d",&su);  
        for(i=1;i<=5;i++)  
            for(j=1;j<=5;j++)  
                if(a[i][j] == su)  
                {  
                    a[i][j] = 0;  
                    a[i][0]++;  
                    a[0][j]++;  
                    if(i==j)  
                    {         
                        a[0][0]++;  
                    }  
                    if(i+j==6)  
                    {  
                        a[0][6]++;  
                    }  
                }  
                count = 0;  
                for(i=0;i<=6;i++)  
                    if(a[0][i]==5)  
                    {  
                        count++;  
                    }  
                for(i=1;i<=5;i++)  
                    if(a[i][0]==5)  
                    {  
                        count++;  
                    }  
        if(count >= 3)  
        {  
            printf("%d",k);  
            break;  
        }  
    }  
}  