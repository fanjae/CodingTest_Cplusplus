#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n / 5; i++)
	{
		cout << "V";
	}
	n %= 5;
	for (int i = 1; i <= n % 5; i++)
	{
		cout << "I";
	}
}