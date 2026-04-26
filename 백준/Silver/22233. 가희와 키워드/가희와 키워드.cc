#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
unordered_map <string, bool> key_word;
unordered_map <string, bool> deleted_word;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n,m;
	string buffer;
	cin >> n >> m;
	for(int i=0; i<n; i++)
	{	
		cin >> buffer;
		key_word[buffer] = true;
	}

	for(int i=0; i<m; i++)
	{
		cin >> buffer;
		string temp;
		int index = 0;
		int last_comma=-1;
		int string_size = buffer.size();
		
		for(int j=0; j<string_size; j++)
		{
			if(buffer[j] == ',')
			{
				temp = buffer.substr(index,j-last_comma-1);
				last_comma = j;
				index = j+1;
				auto iter = key_word.find(temp);
				if(iter != key_word.end())
				{
					deleted_word[temp] = true;
				}
				temp.clear();
			}
			else if(j == string_size-1)
			{
				temp = buffer.substr(index,j-last_comma+1);
				auto iter = key_word.find(temp);
				if(iter != key_word.end())
				{
					deleted_word[temp] = true;
				}
				temp.clear();
			}
		}
		cout << key_word.size() - deleted_word.size() << '\n';
	}
	
}