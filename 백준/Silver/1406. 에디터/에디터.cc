#include <iostream>
#include <string>
#include <list>
using namespace std;
list<char> editor;
list<char>::iterator cursor;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string data;
	int command;


	cin >> data;
	for (int i = 0; i < data.length(); i++)
	{
		editor.push_back(data[i]);
	}
	cin >> command;
	cursor = editor.end();
	for (int i = 0; i < command; i++)
	{
		char op;
		char insert_value;
		cin >> op;
		if (op == 'L')
		{
			if (cursor != editor.begin())
			{
				cursor--;
			}
		}
		else if (op == 'D')
		{
			if (cursor != editor.end())
			{
				cursor++;
			}
		}
		else if (op == 'B')
		{
			if (cursor != editor.begin())
			{
				cursor--;
				cursor = editor.erase(cursor);
			}
		}
		else if (op == 'P')
		{
			cin >> insert_value;
			editor.insert(cursor, insert_value);
		}
	}
	for (auto iter = editor.begin(); iter != editor.end(); iter++)
	{
		cout << *iter;
	}
}