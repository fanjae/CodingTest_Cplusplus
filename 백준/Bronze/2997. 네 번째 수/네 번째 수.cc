#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int data[5];
    int min=10005;
    for(int i=0; i<3; i++)
    {
        scanf("%d",&data[i]);
    }
    sort(data,data+3);
    for(int i=1; i<=2; i++)
    {
        if(data[i] - data[i-1] < min)
        {
            min = data[i] - data[i-1];
        }
    }
    int flag=0;
    for(int i=1; i<=2; i++)
    {
        if(data[i] - data[i-1] != min)
        {
           data[3] = data[i-1] + min;
            flag = 1;   
        }
    }
    if(flag == 0)
    {
        data[3] = data[2] + min;
    }
    printf("%d\n",data[3]);
}