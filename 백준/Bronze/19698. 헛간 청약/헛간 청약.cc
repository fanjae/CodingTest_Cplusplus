#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void)
{
	long long int cow, r, c , n;
	long long int x, y;
	cin >> cow >> r >> c >> n;

	cout << min(cow, (r / n) * (c / n));	 
}