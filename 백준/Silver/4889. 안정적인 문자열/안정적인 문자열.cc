#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void)
{
	string n;
	int cnt = 1;
	while (1)
	{
		stack <char> stk;
		int answer = 0;
		cin >> n;
		if (n[0] == '-')
		{
			break;
		}
		for (int i = 0; i < n.length(); i++)
		{
			if (!stk.empty())
			{
				if (stk.top() == '{' && n[i] == '}')
				{
					stk.pop();
					continue;
				}
			}
			stk.push(n[i]);
		}
		while (!stk.empty())
		{
			char temp = stk.top();
			stk.pop();

			if (stk.top() == temp)
			{
				answer++;
				stk.pop();
			}

			else if (stk.top() == '}' && temp == '{')
			{
				answer += 2;
				stk.pop();
			}

			
		}
		cout << cnt << ". " << answer << std::endl;
		cnt++;
		
	}
}