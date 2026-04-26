#include <stdio.h>
int main(void)
{
    int count=0;
    int n;
    int data[5];
    scanf("%d",&n);
    for(int i=0; i<5; i++)
    {
        scanf("%d",&data[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(data[i] == n)
        {
            count++;
        }
    }
    printf("%d",count);
}