#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	while (n--)
	{
		double a, b, c;
		cin >> a >> b >> c;

		cout << fixed;
		cout.precision(2);
		cout << "$" << a * b * c << "\n";
	}
}