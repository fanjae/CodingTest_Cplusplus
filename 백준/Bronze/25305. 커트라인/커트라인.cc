#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, k;
	int x[10005];
	
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	sort(x + 1, x + n + 1, greater<int>());
	if (n == 1)
	{
		cout << x[1];
	}
	else
	{
		cout << x[k];
	}
}