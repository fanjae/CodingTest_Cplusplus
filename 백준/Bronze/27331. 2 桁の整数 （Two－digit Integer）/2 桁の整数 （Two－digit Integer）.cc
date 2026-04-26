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
	cout << a << b;
}