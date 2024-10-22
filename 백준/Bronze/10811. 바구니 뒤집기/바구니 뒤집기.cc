#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, m;
	vector<int> vec;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		vec.push_back(i);
	}
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		reverse(vec.begin()+(x-1), vec.begin() + y);
	}
	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << " ";
	}
}