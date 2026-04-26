#include <iostream>
#include <algorithm>
using namespace std;
int score[6] = { 1,2,3,3,4,10 };
int score2[7] = { 1,2,2,2,3,5,10 };
int dat[6];
int dat2[7];

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int corps = 0;
		int corps2 = 0;
		for (int i = 0; i < 6; i++)
		{
			cin >> dat[i];
			corps += (dat[i] * score[i]);
		}
		for (int i = 0; i < 7; i++)
		{
			cin >> dat2[i];
			corps2 += (dat2[i] * score2[i]);
		}
		cout << "Battle " << i << ": ";
		if (corps > corps2)
		{
			cout << "Good triumphs over Evil\n";
		}
		else if (corps < corps2)
		{
			cout << "Evil eradicates all trace of Good\n";
		}
		else
		{
			cout << "No victor on this battle field\n";
		}
	}
}