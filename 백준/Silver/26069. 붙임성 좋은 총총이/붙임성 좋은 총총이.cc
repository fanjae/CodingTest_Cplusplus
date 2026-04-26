#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;
map <string, bool> rainbow_dance;

int main(void)
{
	int n;
	int cnt = 0;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		if (a.compare("ChongChong") == 0)
		{
			if (rainbow_dance[a] == false)
			{
				rainbow_dance[a] = true;
				cnt++;
			}
			if (rainbow_dance[b] == false)
			{
				rainbow_dance[b] = true;
				cnt++;
			}
		}
		else if (b.compare("ChongChong") == 0)
		{
			if (rainbow_dance[a] == false)
			{
				rainbow_dance[a] = true;
				cnt++;
			}
			if (rainbow_dance[b] == false)
			{
				rainbow_dance[b] = true;
				cnt++;
			}
		}
		else if (rainbow_dance[a] == true) 
		{
			if (rainbow_dance[b] == false)
			{
				rainbow_dance[b] = true;
				cnt++;
			}
		}
		else if (rainbow_dance[b] == true)
		{
			if (rainbow_dance[a] == false)
			{
				rainbow_dance[a] = true;
				cnt++;
			}
		}
	}
	cout << cnt;
}