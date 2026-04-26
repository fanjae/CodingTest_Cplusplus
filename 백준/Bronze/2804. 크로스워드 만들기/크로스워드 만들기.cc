#include <stdio.h>
#include <string.h>
char data[40];
char data2[40];
int main()
{
     int set=0;
     int len,len2;
     int index,index2;
     scanf("%s",data);
     scanf("%s",data2);
     len = strlen(data);
     len2 = strlen(data2);
     for(int i=0; i<len; i++)
     {
        for(int j=0; j<len2; j++)
        {
            if(data[i] == data2[j] && set == 0)
            {
                set = 1;
                index = i + 1;
                index2 = j + 1;
            }
        }
     }
     for(int i=0; i<len2; i++)
     {
        for(int j=0; j<len; j++)
        {
            if(i == index2-1 && set == 1)
            {
                printf("%c",data[j]);
            }
            else if(j == index-1 && set == 1)
            {
                printf("%c",data2[i]);
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
     }
}