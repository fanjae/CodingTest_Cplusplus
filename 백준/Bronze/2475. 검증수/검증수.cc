#include<stdio.h>  
   
int main()  
{  
    int sum=0,i,su;  
    for(i=1;i<=5;i++)  
    {  
        scanf("%d",&su);  
        sum += su*su;  
    }  
    printf("%d",sum%10);  
}