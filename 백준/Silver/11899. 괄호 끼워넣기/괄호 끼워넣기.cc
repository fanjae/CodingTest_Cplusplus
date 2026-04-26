#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

stack <char> stk;

int main(void)
{
	char data[105];
	int len;
	int cnt = 0;
	scanf("%s",data);
	
	len = strlen(data);
	for(int i=0; i<len; i++)
	{
		if(data[i] == '(')
		{
			stk.push(data[i]);
		}
		else
		{
			if(stk.empty())
			{
				cnt++;
			}
			else
			{
				stk.pop();
			}
		}
	}
	while(!stk.empty())
	{
		cnt++;
		stk.pop();
	}
	printf("%d\n",cnt);
}