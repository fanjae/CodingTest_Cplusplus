#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int a, b;

	cin >> n;
	cin >> a >> b;
	cout << min(n, a / 2 + b / 1);
}