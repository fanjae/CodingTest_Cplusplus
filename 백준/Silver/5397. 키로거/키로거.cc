#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string data;
	int T;
	cin >> T;
	while (T--)
	{
		list<char> editor;
		list<char>::iterator cursor = editor.begin();

		cin >> data;
		for (int i = 0; i < data.length(); i++)
		{
			if (data[i] == '<')
			{
				if (cursor != editor.begin()) // 앞으로 이동 가능 여부 체크
				{
					cursor--;
				}
			}
			else if (data[i] == '>')
			{
				if (cursor != editor.end()) // 뒤로 이동 가능 여부 체크
				{
					cursor++;
				}
			}
			else if (data[i] == '-') 
			{
				if(!editor.empty()) // 비어있지 않은 경우.
				{
					if (cursor != editor.begin()) // 커서가 맨 앞인 경우 지울 수 없음.
					{
						cursor--;
						cursor = editor.erase(cursor);
					}
				}
			}
			else
			{
				editor.insert(cursor, data[i]);
			}
		}

		for (auto iter = editor.begin(); iter != editor.end(); iter++)
		{
			cout << *iter;
		}
		cout << "\n";
	}
}