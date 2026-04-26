#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int T;
	int i = 1;
	cin >> T;
	while(i <= T)
	{ 
		int dat[3];
		cin >> dat[0] >> dat[1] >> dat[2];
		sort(dat, dat + 3);

		cout << "Case #" << i << ": ";
		i++;

		if (dat[0] + dat[1] <= dat[2])
		{
			cout << "invalid!\n";
		}
		else if (dat[0] == dat[1] && dat[1] == dat[2])
		{
			cout << "equilateral\n";
		}
		else if (dat[0] == dat[1] || dat[1] == dat[2] || dat[0] == dat[2])
		{
			cout << "isosceles\n";
		}
		else
			cout << "scalene\n";
		
	}
}