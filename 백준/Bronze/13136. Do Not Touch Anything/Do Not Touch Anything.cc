#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	long long int r, c , n;
	long long int x, y;
	cin >> r >> c >> n;

	if (r % n)
	{
		x = r / n + 1;
	}
	else
	{
		x = r / n;
	}
	if (c % n)
	{
		y = c / n + 1;
	}
	else
	{
		y = c / n;
	}
	cout << x * y;	 
}