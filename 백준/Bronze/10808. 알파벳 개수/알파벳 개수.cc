#include <stdio.h>
#include <string.h>
int main()
{
    int len,i;
    int count[255]={0};
    char str[91];
    gets(str);
    len = strlen(str);
    for(i = 0;i < len; i++)
    {
        count[str[i]]++;
    }
     
    for(i = 'a'; i <= 'z'; i++)
    {
        printf("%d ",count[i]);
    }  
}