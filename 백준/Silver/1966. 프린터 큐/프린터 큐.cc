/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <queue>

using namespace std;

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        queue <int> index;
        deque <int> pro_queue;
        queue <int> print;
        int n,target;
        int order = 1;
        scanf("%d %d",&n,&target);
        for(int i=0; i<n; i++)
        {
            int value;
            scanf("%d",&value);
            pro_queue.push_back(value);
            index.push(i);
        }
        while(pro_queue.empty() == false)
        {
            bool find = false;
            int size = pro_queue.size();
            int front = pro_queue.front();
            int front_index = index.front();
			for(int i=1; i<size; i++)
	        {
	            if(front < pro_queue[i])
	            {
	                    find = true;
	                    break;
	            }
	        }
            if(find == true)
            {
                pro_queue.pop_front();
                pro_queue.push_back(front);
                index.pop();
                index.push(front_index);
            }
            else
            {
                if(front_index == target)
                {
                    printf("%d\n",order);
                    break;
                }
                else
                {
                	pro_queue.pop_front();
                	index.pop();
                	order++;
				}
            }   
        }
    }
}