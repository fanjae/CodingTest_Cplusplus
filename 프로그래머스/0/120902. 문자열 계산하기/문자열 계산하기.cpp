#include <iostream>
#include <string>
#include <vector>
using namespace std;
int solution(string my_string)
{
	int answer = 0;
	string front_string;
	string back_string;
	vector <int> op_index;
	
	for (int i = 0; i < my_string.length(); i++)
	{
		if (my_string[i] == '+' || my_string[i] == '-')
		{
			op_index.push_back(i);
		}
	}

	for (int i = 0; i < op_index.size(); i++)
	{

		front_string = my_string.substr(i, op_index[i]);
		if (i == op_index.size() - 1) // 마지막 값
		{
			back_string = my_string.substr(op_index[i] + 1, my_string.length());
		}
		else
		{
			back_string = my_string.substr(op_index[i] + 1, op_index[i + 1]);
		}
		
		if (i == 0) // 첫 값인 경우
		{
			if (my_string[op_index[i]] == '+')
			{
				answer = stoi(front_string) + stoi(back_string);
			}
			else
			{
				answer = stoi(front_string) - stoi(back_string);
			}
		}
		else
		{
			if (my_string[op_index[i]] == '+')
			{
				answer += stoi(back_string);
			}
			else
			{
				answer -= stoi(back_string);
			}
		}
	}
	return answer;
	
}