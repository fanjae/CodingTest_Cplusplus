#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int a, b, c;
	int sum = 0;

	cin >> n;
	cin >> a >> b >> c;

	if (n - a >= 0)
	{
		sum += a;
	}
	else
	{
		sum += n;
	}
	if (n - b >= 0)
	{
		sum += b;
	}
	else
	{
		sum += n;
	}
	if (n - c >= 0)
	{
		sum += c;
	}
	else
	{
		sum += n;
	}
	cout << sum;
}