#include <iostream>
using namespace std;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
long long int gcd(long long int  a, long long int  b)
{
	long long int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main(void)
{
	first_init();

	int n;
	cin >> n;
	while (n--)
	{
		long long int a, b;
		long long int gcd_value;
		cin >> a >> b;
		gcd_value = gcd(a, b);

		cout << (a / gcd_value) * (b / gcd_value) * gcd_value << "\n";
	}
}