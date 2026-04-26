#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		
		vector<int> his;
		stack <int> stk;
		long long int max_value = 0;
		
		for(int i=0; i<n; i++)
		{
			int value;
			scanf("%d",&value);
			his.push_back(value);
		}
	
		for(int i=0; i<n; i++)
		{
			while(!stk.empty() && his[stk.top()] > his[i])
			{
				long long int height = his[stk.top()];
				long long int width = i;
				stk.pop();
				if(!stk.empty())
				{
					width = i - stk.top() - 1;
				}
				if(max_value < height * width)
				{
					max_value = height * width;
				}
			}
			stk.push(i);
		}
		while(!stk.empty())
		{
			long long int height = his[stk.top()];
			long long int width = n;
			stk.pop();
			if(!stk.empty())
			{
				width = n - stk.top() - 1;
			}
			if(max_value < height * width)
			{
				max_value = height * width;
			}
			
		}
		printf("%lld\n",max_value);
	}
}