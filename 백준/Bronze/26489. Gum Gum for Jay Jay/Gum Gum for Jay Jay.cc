#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string abc;
	int cnt = 0;
	while (1)
	{
		getline(cin, abc);
		if (cin.eof() == true)
		{
			break;
		}
		cnt++;
	}
	cout << cnt;
}