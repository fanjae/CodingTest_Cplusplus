#include <iostream>
using namespace std;
int main(void)
{
	int count=0;
	for(int i=0; i<6; i++)
	{
		char win;
		cin >> win;
		if(win == 'W')
		{
			count++;
		}
	}
	switch(count)
	{
		case 5:
		case 6:
			cout << 1 << "\n";
			break;
		case 3:
		case 4:
			cout << 2 << "\n";
			break;
		case 1:
		case 2:
			cout << 3 << "\n";
			break;
		default:
			cout << -1 << "\n";
	}
}