#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int in[5],ex[5],max=0,sum=0,i,j;  
    for(i=1;i<=4;i++)  
    {  
        scanf("%d %d",&ex[i],&in[i]);  
    }  
    for(i=1;i<=4;i++)  
    {  
        sum = sum - ex[i];  
        sum = sum + in[i];  
        if(max < sum)  
        {  
            max = sum;  
        }  
    }  
    printf("%d",max);  
}