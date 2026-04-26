#include <stdio.h>
#include <stack>
#include <algorithm>

using namespace std;

stack <pair<int, int> > stk;
int main(void)
{
	int T;
	int sum = 0;
	scanf("%d",&T);
	while(T--)
	{
		int data;
		int score,time;
		scanf("%d",&data);
		if(data != 0)
		{
			scanf("%d %d",&score,&time);
			stk.push(make_pair(score,time));
		}
		
		if(!stk.empty())
		{
			int top_score, top_time;
			top_score = stk.top().first;
			top_time = stk.top().second;
			
			top_time--;
			
			stk.pop();
			
			if(top_time == 0)
			{
				sum += top_score;
			}
			else
			{
				stk.push(make_pair(top_score,top_time));
			}
		}

	}
	printf("%d\n",sum);
}