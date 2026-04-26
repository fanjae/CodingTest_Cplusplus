#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, m;
	cin >> n >> m;
	if (n > m)
	{
		cout << (24 - n) + m;
	}
	else 
	{
		cout << m - n;
	}
}