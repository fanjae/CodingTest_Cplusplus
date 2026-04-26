#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;

		bool possible = true;
		int a_cnt[26] = { 0 };
		int b_cnt[26] = { 0 };
		int a_len = a.length();
		int b_len = b.length();

		if (a_len != b_len)
		{
			possible = false;
		}

		for (int i = 0; i < a_len; i++)
		{
			a_cnt[a[i] - 'a']++;
			b_cnt[b[i] - 'a']++;
		}

		for (int i = 0; i < 26; i++)
		{
			if (a_cnt[i] != b_cnt[i])
			{
				possible = false;
			}
		}
		if (possible)
		{
			cout << "Possible\n";
		}
		else
		{
			cout << "Impossible\n";
		}
	}
}