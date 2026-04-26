#include <iostream>
#include <string>
using namespace std;
int cnt[2] = { 0 };
int str_length;
bool error_check(string str)
{
	if (str[0] == '_' || str[str_length-1] == '_') // 맨 앞 '_' 이면 에러
	{
		return true;
	}
	if (str[0] >= 'A' && str[0] <= 'Z') // 맨 앞 대문자면 위배
	{
		return true;
	}
	for (int i = 0; i < str_length; i++)
	{
		if (i != str_length - 1 && str[i] == '_' && str[i + 1] == '_') // 밑줄 연속은 에러.
		{
			return true;
		}
		if (str[i] == '_') // 밑줄 사용시 C++
		{
			cnt[0]++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') // 대문자 사용시 Java
		{
			cnt[1]++;
		}
	}
	if (cnt[0] > 0 && cnt[1] > 0) // 대문자 밑줄 혼용시 에러.
	{
		return true;
	}
	return false;
}
int main(void)
{
	bool cplusplus_type = false;

	
	string str;
	string convert_str;
	
	cin >> str;
	str_length = str.length();

	if (error_check(str) == true)
	{
		cout << "Error!";
		return 0;
	}
	if (cnt[0] > 0)
	{
		cplusplus_type = true;
	}
	else if (cnt[1] > 0)
	{
		cplusplus_type = false;
	}

	if (cplusplus_type) // C++ -> Java로 변환.
	{
		for (int i = 0; i < str_length; i++)
		{
			if (str[i] == '_' && str[i+1] != 0)
			{
				str[i+1] = str[i+1] - 32;
				continue;
			}
			convert_str = convert_str + str[i];
		}
		
	}
	else
	{
		for (int i = 0; i < str_length; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				convert_str = convert_str + '_';
				str[i] = str[i] + 32;
			}
			convert_str = convert_str + str[i];
		}

	}
	cout << convert_str;
}