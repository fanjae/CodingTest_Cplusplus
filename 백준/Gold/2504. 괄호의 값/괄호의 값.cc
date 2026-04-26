#include <string.h>
#include <stdio.h>
#include <stack>
using namespace std;
int main(void)
{
	int ans = 0;
	int len;
	int sum = 0;
	int temp = 1;
	int top_value = 0;
	char data[40];
	stack<int> value_stack;
	stack<char> op_stack;
	
	scanf("%s",data);
	len = strlen(data);
	
	for(int i=0; i<len; i++)
	{
		if(data[i] == '(')
		{
			temp *= 2;
			op_stack.push('(');	
		}
		if(data[i] == '[')
		{
			temp *= 3;
			op_stack.push('[');
		}
		if(data[i] == ')')
		{
			if(op_stack.empty() || op_stack.top() != '(')
			{
				printf("0\n");
				return 0;	
			}
			else if(data[i-1] == '(')
			{
				temp /= 2;
				sum = (temp * 2);
				value_stack.push(sum);
				op_stack.pop();
			}
			else
			{
				temp /= 2;
				op_stack.pop();
			}
		}
		if(data[i] == ']')
		{
			if(op_stack.empty() || op_stack.top() != '[')
			{
				printf("0\n");
				return 0;	
			}
			else if(data[i-1] == '[')
			{
				temp /= 3;
				sum = (temp * 3);
				value_stack.push(sum);
				op_stack.pop();
			}
			else
			{
				temp /= 3;
				op_stack.pop();
			}
		}
		sum = 0;
	}
	sum = 0;
	if(!op_stack.empty())
	{
		printf("0");
		return 0;
	}
	while(!value_stack.empty())
	{
		sum += value_stack.top();
		value_stack.pop();
	}
	printf("%d\n",sum);
}
	