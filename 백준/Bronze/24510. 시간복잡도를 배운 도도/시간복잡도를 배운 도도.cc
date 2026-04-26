#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n;
	int answer = 0;
	cin >> n;
	while (n--)
	{
		int temp_answer = 0;
		string value;
		cin >> value;

		size_t found = value.find("for");
		if (found != string::npos)
		{
			temp_answer++;
		}
		while (found != string::npos)
		{
			found = value.find("for", found + 1, 3);
			if (found != string::npos)
			{
				temp_answer++;
			}
		}

		found = value.find("while");
		if (found != string::npos)
		{
			temp_answer++;
		}
		while (found != string::npos)
		{
			found = value.find("while", found + 1, 5);
			if (found != string::npos)
			{
				temp_answer++;
			}
		}
		
		if (answer < temp_answer)
		{
			answer = temp_answer;
		}
	}
	cout << answer;
}