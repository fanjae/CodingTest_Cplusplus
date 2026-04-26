#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> Queue;
    
	int value;
    int count[500005];
    int n;
    scanf("%d",&n);
      
    for(int i=1; i<=n; i++)
    {
        Queue.push(i);
    }
    while(!Queue.empty())
    {
        if(!Queue.empty())
        {
        	if(Queue.size() == 1)
        	{
            	value = Queue.front();
            	printf("%d\n",value);
            	return 0;
            }
            Queue.pop();
            value = Queue.front();
            Queue.pop();
            Queue.push(value);
        }
    }
}