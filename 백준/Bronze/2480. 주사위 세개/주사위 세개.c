#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int a[5],maxcount=0,samecount[10]={0},i;  
    for(i=1;i<=3;i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    for(i=1;i<=3;i++)  
    {  
       if(maxcount < a[i])  
       {  
            maxcount = a[i];  
       }  
       if(a[i]==1)  
       {  
         samecount[1]=samecount[1]+1;  
       }  
       else if(a[i]==2)  
       {  
         samecount[2]=samecount[2]+1;  
       }  
       else if(a[i]==3)  
       {  
         samecount[3]=samecount[3]+1;  
       }  
       else if(a[i]==4)  
       {  
         samecount[4]=samecount[4]+1;  
       }  
       else if(a[i]==5)  
       {  
         samecount[5]=samecount[5]+1;  
       }  
       else if(a[i]==6)  
       {  
         samecount[6]=samecount[6]+1;  
       }  
    }  
    for(i=1;i<=6;i++)  
    {  
        if(samecount[i]==3)  
        {  
            printf("%d",10000+(i*1000));  
            return 0;  
        }  
        if(samecount[i]==2)  
        {  
            printf("%d",1000+(i*100));  
            return 0;  
        }  
    }  
    printf("%d",maxcount*100);  
    return 0;  
}