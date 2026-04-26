#include <iostream>
using namespace std;
int main(void)
{
	int n;
	int sum, sum2, sum3;
	sum = sum2 = sum3 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
		sum2 = sum2 + i;
		sum3 = sum3 + (i * i * i);
	}
	cout << sum << "\n";
	cout << sum2 * sum2 << "\n";
	cout << sum3 << "\n";
}