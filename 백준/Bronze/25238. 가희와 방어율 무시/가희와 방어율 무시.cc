#include <iostream>
using namespace std;
int main(void)
{
	double a,b;
	cin >> a >> b;

	if (a - (a * (b / 100)) >= 100)
	{
		cout << 0;
	}
	else
	{
		cout << 1;
	}

}