#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int a[1005],n,p,i,j,circle;  
      
    scanf("%d %d",&n,&p);  
      
    a[0] = n*n%p;  
      
    for(i=1;i<1005;i++)  
    {  
        a[i] = a[i-1] * n % p;  
        for(j=0;j<i;j++)  
        {  
            if(a[i] == a[j])  
            {  
                printf("%d",i-j);  
                return 0;  
            }  
        }  
    }              
}