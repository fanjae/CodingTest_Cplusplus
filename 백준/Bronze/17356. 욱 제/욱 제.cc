#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double c = (double) (b - a) / 400;
	cout << 1 / (1 + pow(10, c));
}