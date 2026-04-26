#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> abc;
		if (abc.length() >= 6 && abc.length() <= 9)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}