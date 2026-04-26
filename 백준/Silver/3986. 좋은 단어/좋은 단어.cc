#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

int main(void)
{
	int n;
	int ans = 0;
	scanf("%d",&n);
	while(n--)
	{
		stack <char> stk;
		char data[100005];
		scanf("%s",data);
		
		int size = strlen(data);
		for(int i=0; i<size; i++)
		{
			if(stk.empty() == true || stk.top() != data[i])
			{
				stk.push(data[i]);	
			}
			else
			{
				stk.pop();
			}
		}
		if(stk.empty())
		{
			ans++;
		}
	}
	printf("%d\n",ans);
	
}