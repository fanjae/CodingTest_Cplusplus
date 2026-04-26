#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack <char> stk;
string str;
void print()
{
	while (!stk.empty())
	{
		cout << stk.top();
		stk.pop();
	}
}
int main(void)
{
	int str_length;
	getline(cin, str);

	str_length = str.length();
	bool mark = false;

	for (int i = 0; i < str_length; i++)
	{
		if (str[i] == '<') // 태그 엶.
		{
			print();
			mark = true;
			cout << str[i];
		}
		else if (str[i] == '>') // 태그 닫힘.
		{
			mark = false;
			cout << str[i];
		}
		else if (mark) // 태그 걸린 경우 그대로
		{
			cout << str[i];
		}
		else
		{
			if (str[i] == ' ')
			{
				print();
				cout << str[i];
			}
			else
			{
				stk.push(str[i]);
			}
		}
	}
	print();
	cout << "\n";
	return 0;
}