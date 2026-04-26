#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string S,tmp;
	set <string> sub_string;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		tmp = "";
		for (int j = i; j < S.length(); j++)
		{
			tmp += S[j];
			sub_string.insert(tmp);
		}
	}
	cout << sub_string.size();
}