#include <stdio.h>
#include <queue>
#include <functional>

using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;
int main(void)
{
	int n;
	scanf("%d",&n);
	
	for(int i=1 ;i<=n; i++)
	{
		int value;
		scanf("%d",&value);
		
		if(value > 0)
		{
			pq.push(value);
		}
		else if(value == 0)
		{
			if(pq.empty() == true)
			{
				printf("0\n");	
			}
			else
			{
				printf("%d\n",pq.top());
				pq.pop();
			}
		}
	}
}