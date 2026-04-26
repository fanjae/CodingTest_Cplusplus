#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> stk_value;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--)
	{
		int command;
		cin >> command;
		if (command == 1)
		{
			int value;
			cin >> value;

			stk_value.push(value);
		}
		else if (command == 2)
		{
			if (stk_value.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << stk_value.top() << "\n";
				stk_value.pop();
			}
		}
		else if (command == 3)
		{
			cout << stk_value.size() << "\n";
		}
		else if (command == 4)
		{
			if (stk_value.empty())
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if (command == 5)
		{
			if (stk_value.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << stk_value.top() << "\n";
			}
		}
	}
}