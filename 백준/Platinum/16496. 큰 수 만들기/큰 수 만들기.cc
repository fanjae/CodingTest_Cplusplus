#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool compare(string& a, string& b)
{
	return a + b > b + a;
}
string solution(vector<string>& data)
{
	string temp = "";
	sort(data.begin(), data.end(), compare);
	for (int i = 0; i < data.size(); i++)
	{
		temp += data[i];
	}
	if (temp[0] == '0')
	{
		temp = "";
		temp += "0";
	}
	return temp;
}
int main(void)
{
	int n;
	cin >> n;
	vector <string> str_data;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		str_data.push_back(to_string(temp));
	}
	cout << solution(str_data);
}
	