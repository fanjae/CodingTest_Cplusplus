#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

stack <char> value;
char str[1000005];
char answer[1000005];
char substr[40];
int main(void)
{
	scanf("%s",str);
	scanf("%s",substr);
	
	int len = strlen(str);
	int len2 = strlen(substr);
	
	for(int i=0; i<len; i++)
	{
		value.push(str[i]);
		if(i < len2-2)
		{
			continue;
		}	
		if(value.top() == substr[len2-1])
		{
			int count = 0;
			char temp_value[40];
		
			for(int i=0; i<len2; i++)
			{
				if(value.empty() == false && value.top() == substr[len2-i-1])
				{
					temp_value[count] = value.top();
					if(value.empty() == false)
					{
						value.pop();
					}
					count++;
				}
				else
				{
					break;
				}
			}
			if(count != len2)
			{
				for(int i=count-1; i>=0; i--)
				{
					value.push(temp_value[i]);
				}
			}
			count = 0;		
		}
	}
	if(value.empty())
	{
		printf("FRULA");
	}
	else
	{
		int index = 0;
	
		while(!value.empty())
		{
			answer[index] = value.top();
			index++;
			value.pop();
		}
		for(int i=index-1; i>=0; i--)
		{
			printf("%c",answer[i]);
		}
		printf("\n");
	}
}
	