#include <stdio.h>  
int main()  
{  
    long long int a,b,c;  
    scanf("%lld",&a);  
    if(a%400==0)  
    {  
    printf("1");  
    return 0;  
    }  
    else if(a%4==0 && a%100!=0)  
    {  
    printf("1");  
    return 0;  
    }  
    else  
    {  
    printf("0");  
    return 0;  
    }  
}  