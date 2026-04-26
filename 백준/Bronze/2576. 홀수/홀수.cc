#include <stdio.h>
int main(void)
{
    int a[7],sum=0,i,min=300;  
    for(i=0;i<7;i++) scanf("%d",&a[i]);  
       
    for(i=0;i<7;i++) 
        if(a[i]%2==1)
        {
            if(min > a[i])
            min = a[i];
            sum=sum+a[i];
        }
       
    if(sum==0)  
    {  
      sum=-1;  
      printf("%d",sum);  
    }  
    else
    {
      printf("%d\n",sum);
      printf("%d\n",min);  
    }
}