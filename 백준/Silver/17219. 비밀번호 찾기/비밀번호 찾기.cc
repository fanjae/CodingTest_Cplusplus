#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
map <string, string> pw_data;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string addr, pw;
		cin >> addr >> pw;
		pw_data.insert(pair<string,string>(addr, pw));
	}

	map <string, string>::iterator it;
	for (int i = 0; i < m; i++)
	{
		string addr;
		cin >> addr;

		it = pw_data.find(addr);
		cout << it->second << "\n";
	}

}