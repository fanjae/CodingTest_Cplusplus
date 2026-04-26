#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stack>
using namespace std;
int main(void)
{
	while(1)
	{
		stack <char> stk;
		char data[110];
		int len;
		bool done = false;
		fgets(data,105,stdin);
		
		len = strlen(data);
		if(data[0] == '.')
		{
			break;
		}
		
		for(int i=0; i<len; i++)
		{
			if(data[i] == '(')
			{
				stk.push('(');
			}
			else if(data[i] == ')')
			{
				if(stk.empty() || stk.top() != '(')
				{
					printf("no\n");
					break;
				}
				else
				{
					stk.pop();
				}
			}
			else if(data[i] == '[')
			{
				stk.push('[');
			}
			else if(data[i] == ']')
			{
				if(stk.empty() || stk.top() != '[')
				{
					printf("no\n");
					break;
				}
				else
				{
					stk.pop();
				}
			}
			if(i == len-1)
			{
				done = true;
			}
		}
		if(done)
		{
			if(stk.empty())
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
}