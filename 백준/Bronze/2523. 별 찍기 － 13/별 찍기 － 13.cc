#include <stdio.h>  
int main()  
{  
    int i,n,j;  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
     for(j=1;j<=i;j++)  
     {  
      printf("*");  
     }  
    printf("\n");  
    }  
    for(i=1;i<=n;i++)  
    {  
     for(j=n;j>=i+1;j--)  
     {  
      printf("*");  
     }  
    printf("\n");  
    }  
    scanf("%d",&j);  
    return 0;  
}