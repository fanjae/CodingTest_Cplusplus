#include <stdio.h>  
#include <stdlib.h>  
  
long long int a[100]={0,1,1};  
long long int i=3,n;  
  
void fibo(int b)  
{  
  
    if(b<3)  
    {  
        printf("%lld",a[b]);  
        return;  
    }  
    a[b]= a[b-1] + a[b-2];  
    if(b==n)  
    {  
        printf("%lld",a[b]);  
        return;  
    }  
    fibo(b+1);  
}     
int main()  
{  
    scanf("%lld",&n);  
    if(n<3)  
    {  
        fibo(n);  
    }  
    else  
    {  
        fibo(3);  
    }  
}