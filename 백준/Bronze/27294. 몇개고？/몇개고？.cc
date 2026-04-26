#include <iostream>
using namespace std;
int main(void)
{
	int t, s;
	cin >> t >> s;
	if (s == 1 || !(t >= 12 && t <= 16))
	{
		cout << "280";
	}
	else
	{
		cout << "320";
	}
}