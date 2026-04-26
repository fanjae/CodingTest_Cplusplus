#include <stdio.h>
#include <stack>

using namespace std;

stack <int> value;

int cal()
{
	int cal = 1;
	int sum = 0;
	int temp;
	if(value.empty())
	{
		return 0;
	}
	while(!value.empty())
	{
		temp = value.top();
		sum = sum + temp * cal;
		cal *= 10;
		value.pop();	
	}
	return sum;
}
int main(void)
{
	char data[20005];
	char temp;
	int len = 0;
	int sum = 0;
	while((temp = getchar()) != EOF)
	{
		data[len] = temp;
		len++;
	}
	
	for(int i=0; i<len; i++)
	{
		if(data[i] >= '0' && data[i] <= '9')
		{
			value.push(data[i]-'0');
		}
		else if(data[i] == ',' || i == len-1)
		{
			sum += cal();	
		}
	}
	printf("%d\n",sum);
}