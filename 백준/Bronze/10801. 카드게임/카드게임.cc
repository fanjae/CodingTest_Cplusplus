#include <stdio.h>
int main(void)
{
    int awin_Count=0,bwin_Count=0;
    int data[10];
    int data2[10];
    for(int i=0; i<10; i++)
    {
        scanf("%d",&data[i]);
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d",&data2[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(data[i] > data2[i])
        {
            awin_Count++;
        }
        else if(data[i] < data2[i])
        {
            bwin_Count++;
        }
        else
        {
             
        }
    }
    if(awin_Count > bwin_Count)
    {
        printf("A");
    }
    else if(awin_Count < bwin_Count)
    {
        printf("B");
    }
    else
    {
        printf("D");
    }
}