#include <stdio.h>
void reverse(int data[],int index,int index2)
{
    for(int i=0; i<=(index2-index)/2; i++)
    {
        int temp;
        temp = data[index+i];
        data[index+i] = data[index2-i];
        data[index2-i] = temp;
    }
}
int main(void)
{
    int data[20];
    int index,index2;
    for(int i=0; i<20; i++)
    {
        data[i] = i+1;
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d %d",&index,&index2);
        reverse(data,index-1,index2-1);
    }
    for(int i=0; i<20; i++)
    {
       printf("%d ",data[i]);   
    }
}