#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c;
	int count = 0;
	cin >> a >> b >> c;
	if (a == 1)
	{
		count++;
	}
	if (b == 1)
	{
		count++;
	}
	if (c == 1)
	{
		count++;
	}
	if (count >= 2)
	{
		cout << "1";
	}
	else
	{
		cout << "2";
	}
}