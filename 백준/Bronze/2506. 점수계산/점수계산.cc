#include <stdio.h>  
int main()  
{  
    int n,i,k=1,sum=0,ox;  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&ox);  
        if(ox==1)  
            sum+=k,k++;  
        else  
            k=1;  
    }  
    printf("%d\n",sum);  
} 