#include <iostream>
using namespace std;
int main(void)
{
	char n;
	cin >> n;
	if (n == 'M')
	{
		cout << "MatKor";
	}
	if (n == 'W')
	{
		cout << "WiCys";
	}
	if (n == 'C')
	{
		cout << "CyKor";
	}
	if (n == 'A')
	{
		cout << "AlKor";
	}
	if (n == '$')
	{
		cout << "$clear";
	}
}