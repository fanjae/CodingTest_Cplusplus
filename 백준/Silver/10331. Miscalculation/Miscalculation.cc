#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

stack <int> stk;
stack <char> op_stk;
int main(void)
{
	int value = -1;
	int len = 0;
	int ans = 0;
	int m_result = 0;
	int l_result = 0;
	char data[10005];
	
	scanf("%s",data);
	scanf("%d",&ans);
	len = strlen(data);
	for(int i=0; i<len; i++)
	{
		if(data[i] == '+')
		{
			if(value == -1)
			{
				value = (data[i-1] - '0') + (data[i+1] - '0');
			}
			else
			{
				value = value + (data[i+1] - '0');
			}
		}
		else if(data[i] == '*')
		{
			if(value == -1)
			{
				value = (data[i-1] - '0') * (data[i+1] - '0');
			}
			else
			{
				value = value * (data[i+1] - '0');	
			}
		}
	}
	if(value == -1)
	{
		l_result = (data[0] - '0');
	}
	else
	{
		l_result = value;
	}
	for(int i=0; i<len; i++)
	{
		if(data[i] == '+')
		{
			op_stk.push('+');
		}
		else if(data[i] == '*')
		{
			int temp_value = stk.top() * (data[i+1] - '0');
			stk.pop();
			stk.push(temp_value);
			i++;
		}
		else if(data[i] >= '0' && data[i] <= '9')
		{
			stk.push(data[i]-'0');
		}
	}
	while(!stk.empty())
	{
		m_result += stk.top();
		stk.pop();
	}
	if(m_result == ans && l_result == ans)
	{
		printf("U\n");
	}
	else if(m_result != ans && l_result != ans)
	{
		printf("I\n");
	}
	else if(m_result == ans)
	{
		printf("M\n");
	}
	else if(l_result == ans)
	{
		printf("L\n");
	}
}
	