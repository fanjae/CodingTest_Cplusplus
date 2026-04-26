#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stack>
#include <deque>

using namespace std;

char function[100005];
char list[10000005];
deque <int> dq;
deque <int> dq_reverse;
stack <int> value_stack;

bool delete_value(bool reverse)
{
	if(reverse == false)
	{
		if(dq.empty())
		{
			return false;
		}
		else
		{
			dq.pop_front();
			return true;
		}
	}
	else if(reverse == true)
	{
		if(dq.empty())
		{
			return false;
		}
		else
		{
			dq.pop_back();
			return true;
		}
	}
}
void print_value(bool reverse)
{
	if(reverse == false)
	{
		while(!dq.empty())
		{
			int value = dq.front();
			printf("%d",value);
			dq.pop_front();
			if(dq.empty() == false)
			{
				printf(",");
			}
			
		}
	}
	else if(reverse == true)
	{
		while(!dq.empty())
		{
			int value = dq.back();
			printf("%d",value);
			dq.pop_back();
			if(dq.empty() == false)
			{
				printf(",");
			}
		}
	}
}
void value_cal()
{
	int n = 1;
	int value = 0;
	while(!value_stack.empty())
	{
		value += (value_stack.top() * n);
		n *= 10;
		value_stack.pop();
	}
	dq.push_back(value);
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		bool error = false;
		bool reverse = false;
		int function_len;
		int list_len;
		scanf("%s",function);
		scanf("%d",&n);
		scanf("%s",list);
		
		function_len = strlen(function);
		list_len = strlen(list);
		
		if(n != 0)
		{
			for(int i=0; i<list_len; i++)
			{
				if(list[i] >= '0' && list[i] <= '9')
				{
					value_stack.push(list[i] - '0');
				}
				else if(list[i] == ',' || list[i] == ']')
				{
					value_cal();
				}
			}
		}
		
		for(int i=0; i<function_len; i++)
		{
			if(function[i] == 'R')
			{
				reverse = !reverse;
			}
			else if(function[i] == 'D')
			{
				if(delete_value(reverse) == false)
				{
					error = true;
					break;
				}
			}
		}
		if(error)
		{
			printf("error\n");
		}
		else
		{
			if(n == 0)
			{
				printf("[]\n");
			}
			else
			{
				printf("[");
				print_value(reverse);
				printf("]\n");
			}
		}	
	}
}

		