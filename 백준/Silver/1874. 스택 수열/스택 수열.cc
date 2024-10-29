#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack <int> stk;
string answer = "";
int main(void)
{
	int n;
	int now_value = 1;
	bool impossible = false;
	cin >> n;
	while (n--)
	{
		int target;
		cin >> target;
		while (now_value <= target)
		{
			stk.push(now_value);
			now_value++;
			answer += '+';
		}
		if (!stk.empty() && target == stk.top())
		{
			stk.pop();
			answer += '-';
		}
		else if (!stk.empty() && target != stk.top())
		{
			impossible = true;
			break;
		}
	}
	if (!stk.empty())
	{
		impossible = true;
	}
	if (impossible == true)
	{
		cout << "NO";
	}
	else
	{
		for (int i = 0; i < answer.length(); i++)
		{
			cout << answer[i] << "\n";
		}
	}
}