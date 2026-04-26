#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(void)
{
	int T;
	int cnt = 1;
	string data;
	
	cin >> T;
	getline(cin,data);
	while(cnt <= T)
	{
		int str_size;
		stack <char> str_stk;
		getline(cin,data);
		
		str_size = data.size();
		cout << "Case #" << cnt << ": ";
		for(int i=str_size-1; i>=0; i--)
		{
			if(data[i] != ' ')
			{
				str_stk.push(data[i]);
			}
			else
			{
				while(!str_stk.empty())
				{
					char temp = str_stk.top();
					cout << temp;
					str_stk.pop();
				}
				cout << ' ';
			}		
		}
		while(!str_stk.empty())
		{
			char temp = str_stk.top();
			cout << temp;
			str_stk.pop();
		}
		cout << "\n";
		cnt++;
	}
}