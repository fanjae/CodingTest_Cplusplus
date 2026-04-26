#include <string>
#include <iostream>
using namespace std;
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	init();
	int w, a, x, b;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> x;
		cout << a * (x - 1) + b << "\n";
	}
}