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
	int a, b;
	cin >> a >> b;
	if (a < b)
	{
		cout << -1;
	}
	else if (a == b)
	{
		cout << 0;
	}
	else
	{
		cout << 1;
	}
}