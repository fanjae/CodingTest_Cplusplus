#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int dat[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> dat[i];
	}
	sort(dat, dat + 3);

	if (dat[0] == dat[1] && dat[1] == dat[2])
	{
		cout << 2;
	}
	else if (((dat[0] * dat[0]) + (dat[1] * dat[1])) == (dat[2] * dat[2]))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}