#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;
stack <int> value;
int main(void)
{
	char data[105];
	int len;
	int ans = 0;
	scanf("%s",data);
	len = strlen(data);
	
	for(int i=0; i<len; i++)
	{
		if(data[i] >= '0' && data[i] <= '9')
		{
			value.push(data[i] - '0');
		}
		else
		{
			int value1;
			int value2;
			
			value2 = value.top();
			value.pop();
			value1 = value.top();
			value.pop();
			if(data[i] == '+')
			{
				value.push(value1+value2);
			}
			else if(data[i] == '-')
			{
				value.push(value1-value2);
			}
			else if(data[i] == '*')
			{
				value.push(value1*value2);
			}
			else if(data[i] == '/')
			{
				value.push(value1/value2);
			}
		}
	}
	printf("%d\n",value.top());
}