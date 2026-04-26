#include <iostream>
#include <set>
using namespace std;
set <int> set_a;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		int value;
		cin >> value;
		set_a.insert(value);
	}

	set <int>::iterator iter;
	for (int i = 0; i < b; i++)
	{
		int value;
		cin >> value;
		iter = set_a.find(value);
		if (iter != set_a.end())
		{
			set_a.erase(value);
		}
	}

	if (!set_a.empty())
	{
		cout << set_a.size() << "\n";
		for (iter = set_a.begin(); iter != set_a.end(); iter++)
		{
			cout << *iter << " ";
		}
	}
	else
	{
		cout << "0\n";
	}
}