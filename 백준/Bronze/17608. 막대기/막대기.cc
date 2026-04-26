#include <stdio.h>
#include <stack>

using namespace std;
stack <int> stk;
int main(void)
{
	int n;
	int count = 1;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		int value;
		scanf("%d",&value);
		stk.push(value);
	}
	int target = stk.top();
	stk.pop();
	
	while(!stk.empty())
	{
		if(target < stk.top())
		{
			target = stk.top();
			count++;
		}
		stk.pop();	
	}
	printf("%d\n",count);
}