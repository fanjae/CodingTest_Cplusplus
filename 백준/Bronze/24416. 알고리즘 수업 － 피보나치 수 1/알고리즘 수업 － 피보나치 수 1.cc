#include <iostream>
using namespace std;
int cnt = 1;
int main(void)
{
	int n;
	int fib[45] = { 0,1,1 };
	cin >> n;
	
	for (int i = 3; i < 41; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n] << " " << n - 2;
}