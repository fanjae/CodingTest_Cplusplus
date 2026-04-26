#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int data[6]={0};
    int count[50]={0};
    srand(time(NULL));
         
    for(int i=0; i<6; i++)
    {
        int temp = (rand() % 45) + 1;
        if(count[temp] == 0)
        {
            count[temp]++;
        }
        else
        {
           while(count[temp] != 0)
            {
                int temp = (rand() % 45) + 1;
                if(count[temp] == 0)
                {
                    count[temp]++;
                    break;
                }
            }
        }
    }
    for(int i=0; i<50; i++)
    {
        if(count[i] == 1)
        {
            printf("%d ",i);
        }
    }
}