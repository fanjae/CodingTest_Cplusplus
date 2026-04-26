#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	cin >> abc;

	int str_length = abc.length();
	int a, b;
	if (str_length == 2)
	{
		a = abc[0] - '0';
		b = abc[1] - '0';
	}
	if (str_length == 3)
	{
		if (abc[0] >= '2' && abc[0] <= '9')
		{
			a = (abc[0] - '0');
			b = (abc[1] - '0') * 10 + (abc[2] - '0');
		}
		else
		{
			a = (abc[0] - '0') * 10 + (abc[1] - '0');
			b = abc[2] - '0';
		}
	}
	if (str_length == 4)
	{
		a = (abc[0] - '0') * 10 + (abc[1] - '0');
		b = (abc[2] - '0') * 10 + (abc[3] - '0');
	}
	cout << a + b;
}