#include <stdio.h>
#include <string.h>
#include <ctype.h>
char data[1000005];
int size[30]={0};
int main(void)
{
       
    int max = 0;
    int count = 0;
    int index;
    int len=0;
    scanf("%s",data);
    len = strlen(data);
   for(int i=0;i<len;i++)
   {
    if(data[i] >= 97)
    {
         size[data[i]-65-32]++;
        }
        else
        {
            size[data[i]-65]++;
        }
    }
   for(int i=0;i<=25;i++)
   {
    if(max < size[i])
    {
        max = size[i];
        index = i;
    }
   }
   for(int i=0;i<=25;i++)
   {
    if(max == size[i])
    {
        count++;
    }
   }
   if(count > 1)
   {
    printf("?");
   }
   else
   {
    printf("%c",index+65);
   }
}