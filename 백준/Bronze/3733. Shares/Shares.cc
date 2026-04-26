#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << m / (n + 1) << "\n";
	}
}