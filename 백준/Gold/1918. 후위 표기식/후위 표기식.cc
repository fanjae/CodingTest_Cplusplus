#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stack>

using namespace std;
int pre(char op)
{
	if(op == '*' || op == '/')
	{
		return 2;
	}
	else if(op == '+' || op == '-')
	{
		return 1;
	}
	else if(op == '(' || op == ')')
	{
		return 0;
	}
}
int main(void)
{
	int len;
	int index = 0;
	char ans[1005];
	char data[1005];
	stack<char> op_value;
	scanf("%s",data);
	len = strlen(data);
	
	for(int i=0; i<len; i++)
	{
		if(data[i] >= 'A' && data[i] <= 'Z')
		{
			ans[index++] = data[i];
		}
		else if(data[i] == '(')
		{
			op_value.push(data[i]);
		}
		else if(data[i] == ')')
		{
			while(op_value.top() != '(')
			{
				ans[index++] = op_value.top();
				op_value.pop();
			}
			op_value.pop();
		}
		else
		{
			while((op_value.empty() == false && pre(data[i]) <= pre(op_value.top())))
			{
					ans[index++] = op_value.top();
					op_value.pop();
			}
			op_value.push(data[i]);
		}
	}
	while(op_value.empty() == false)
	{
		ans[index++] = op_value.top();
		op_value.pop();
	}
	ans[index] = 0;
	printf("%s",ans);
}