#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    int count[100005]={0};
    int data[100005];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&data[i]);
    }
    sort(data,data+n);
    for(int i=0; i<n; i++)
    {
        if(count[data[i]+1000] == 0)
        {
            printf("%d ",data[i]);
            count[data[i]+1000]++;
        }
    }
}