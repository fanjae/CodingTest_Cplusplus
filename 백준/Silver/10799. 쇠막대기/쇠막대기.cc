#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
	int sum = 0;
	int count = 0;
	stack <char> stk;
	string data;
	cin >> data;
	for(int i=0; i<data.size(); i++)
	{
		if(data[i] == '(')
		{
			count++;
		}
		else
		{
			if(data[i] == ')')
			{
				if(data[i-1] == '(')
				{
					count--;
					sum += count;	
				}
				else
				{
					sum++;
					count--;
				}
			}	
		}
	}
	printf("%d\n",sum);
}
	