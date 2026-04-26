#include <stdio.h>
#include <stack>

using namespace std;
stack <int> stk;
int main(void)
{
	int cnt = 1;
	int n;
	int index = 1;
	int data[1005]={0};
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	while(cnt <= n)
	{
		if(index <= n)
		{
			if(cnt == data[index])
			{
				cnt++;
				index++;
				continue;
			}
			else if(cnt != data[index])
			{
				if(stk.empty())
				{
					stk.push(data[index]);
					index++;
					continue;
				}
				else
				{
					if(cnt == stk.top())
					{
						stk.pop();
						cnt++;
						continue;
					}
					if(stk.top() > data[index])
					{
						stk.push(data[index]);
						index++;
						continue;
					}
					else
					{
						printf("Sad\n");
						return 0;
					}
				}
			}
		}
		else
		{
			if(cnt == stk.top())
			{
				stk.pop();
				cnt++;
				continue;
			}
			else
			{
				printf("Sad\n");
				return 0;
			}
		}
	}
	if(stk.empty())
	{
		printf("Nice\n");
	}
	else
	{
		printf("Sad\n");
	}
}