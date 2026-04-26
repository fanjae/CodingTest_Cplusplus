#include<stdio.h>   
int main()  
{  
    int n,i,sum,j=1;  
    scanf("%d", &n);  
    sum = (n*(n+1))/2;  
       
       
    for(i=1;i<=sum;i++)  
    {  
       printf("*");  
         
      if(i == (j*(j+1))/2)  
      {  
         printf("\n");  
         j++;  
      }  
   }  
}