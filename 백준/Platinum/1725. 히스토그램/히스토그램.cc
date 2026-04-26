#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int max_value = 0;
int main(void)
{
	int n;
	scanf("%d",&n);
	
	vector<int> his;
	stack <int> stk;
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
			int height = his[stk.top()];
			int width = i;
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
		int height = his[stk.top()];
		int width = n;
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
	printf("%d\n",max_value);
}