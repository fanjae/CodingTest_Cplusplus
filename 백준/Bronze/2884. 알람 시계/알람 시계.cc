#include <stdio.h>  
int main()  
{  
    int a,b;  
    scanf("%d %d",&a,&b);  
    b = b - 45;  
    while(b<0)  
    {  
        a = a - 1;  
        b = b + 60;  
    }  
    if(a < 0)  
    {  
        a = a + 24;  
    }  
    printf("%d %d\n",a,b);        
      
} 