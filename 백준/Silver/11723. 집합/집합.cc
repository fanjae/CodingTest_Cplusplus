#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	int value = 0; // 1bit당 x 하나의 의미를 가짐. 
	cin >> T;
	while(T--)
	{
		string input;
		cin >> input;
		if(input == "add")
		{
			int temp;
			cin >> temp;
			
			value = value | (1 << temp -1);
			
		}
		else if(input == "check")
		{
			int temp;
			cin >> temp;
			
			if((value & (1 << temp-1)) == 0)
			{
				cout << "0" << "\n";
			}
			else
			{
				cout << "1" << "\n";
			}
		}
		else if(input == "remove")
		{
			int temp;
			cin >> temp;
			
			value = value & ~(1 << temp-1);
		}
		else if(input == "toggle")
		{
			int temp;
			cin >> temp;
			
			value = value ^ (1 << temp-1);
		}
		else if(input == "empty")
		{
			value = 0;		
		}
		else if(input == "all")
		{
			value = value | (1 << 20) -1;
		}
	}
}