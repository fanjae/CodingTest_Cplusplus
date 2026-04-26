#include <stdio.h>
#include <string.h>
double stack[30];
double su[30];
char data[105];
int top=-1;
void push(double value)
{
	stack[++top] = value;	
}
void pop(char value)
{
	switch(value)
	{
		case '+':
			stack[top-1] = stack[top-1] + stack[top];
			stack[top] = 0;
			top--;
			break;
		case '-':
			stack[top-1] = stack[top-1] - stack[top];
			stack[top] = 0;
			top--;
			break;
		case '*':
			stack[top-1] = stack[top-1] * stack[top];
			stack[top] = 0;
			top--;
			break;
		case '/':
			stack[top-1] = stack[top-1] / stack[top];
			stack[top] = 0;
			top--;
			break;
	}
}
void showTop()
{
	printf("%.2lf\n",stack[top]);
}
int main()
{
	int n;
	int len;
	scanf("%d\n",&n);
	gets(data);
	len = strlen(data);
	for(int i=0; i<n; i++)
	{
		scanf("%lf",&su[i]);
	}
	for(int i=0; i<len; i++)
	{
		if(data[i] >= 'A' && data[i] <= 'Z')
		{
			push(su[data[i]-'A']);
		}
		else
		{
			pop(data[i]);
		}
	}
	showTop();
}
	