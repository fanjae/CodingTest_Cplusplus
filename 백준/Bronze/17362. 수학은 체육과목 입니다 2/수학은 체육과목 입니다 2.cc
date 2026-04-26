#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	if (n % 8 == 0) cout << 2;
	else if (n % 8 == 7) cout << 3;
	else if (n % 8 == 6) cout << 4;
	else
	{
		cout << n % 8;
	}
}