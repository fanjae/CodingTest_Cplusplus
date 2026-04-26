#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char a[55]={0};  
    int i,n,len,c=0;  
    scanf("%s",a);  
    len=strlen(a);  
    if(len>=1)  
    {  
        n=5;  
    }  
    for(i=0;i<=len-1;i++)  
    {  
        if(a[i]=='(')  
        {  
            if(a[i+1]==')')  
            {  
                c++;  
            }  
            else  
            {  
                n+=5;  
            }  
        }  
        else if(a[i]==')')  
        {  
            if(a[i+1]=='(')  
            {  
                c++;  
            }  
            else  
            {  
                n+=5;  
            }  
        }  
    }  
    printf("%d",n+(c*10));  
} 