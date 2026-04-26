#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int a, b, c;
	string value;
	cin >> a >> b >> c;
	cout << a + b - c << std::endl;

	value = to_string(a) + to_string(b);
	cout << stoi(value) - c;
}