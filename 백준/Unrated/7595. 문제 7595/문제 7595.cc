#include <iostream>
using namespace std;
int main(void)
{
	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
}