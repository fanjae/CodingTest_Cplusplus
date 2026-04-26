#include <iostream>
using namespace std;
int main(void)
{
	int a, n, b;
	cin >> a >> n >> b;
	if (a > b)	cout << "Bus";
	else if (a <= b)
	{
		if (a == b && b == n) cout << "Anything";
		else if (a != b && b == n) cout << "Anything";
		else if (b > n) cout << "Bus";
		else cout << "Subway";
	}
}