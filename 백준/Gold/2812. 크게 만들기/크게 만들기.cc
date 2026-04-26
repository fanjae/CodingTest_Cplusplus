#include <stdio.h>
#include <stdlib.h>

int stack[500005];
int top = -1;

void pop()
{
	stack[top] = 0;
	top--;
}
void push(char value)
{
	++top;
	stack[top] = value;
	return ;
}
int main(void)
{
	int n,k;
	char data[500005];
	scanf("%d %d",&n,&k);
	scanf("%s",data);
	
	push(data[0]);
	for(int i=1; i<n; i++)
	{
		if(stack[top] < data[i] && k > 0)
		{
			while(top >= 0 && (stack[top] < data[i]) && k > 0)
			{
				pop();
				k--;
			}
			push(data[i]);
		}
		else
		{
			push(data[i]);
		}
	}
	
	for(int i=0; i<=top-k; i++)
	{
		printf("%c",stack[i]);
	}
}