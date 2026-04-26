#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;
string dp[10005];
string string_add(string a, string b)
{
	int sum = 0;
	string value;
	while(!a.empty() || !b.empty() || sum)
	{
		if(!a.empty())
		{
			sum += a.back() - '0';
			a.pop_back();
		}
		if(!b.empty())
		{
			sum += b.back() - '0';
			b.pop_back();
		}
		value.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(value.begin(),value.end());
	return value;
}
string fibonacci(int n)
{
	if(n == 0)
	{
		return "0";
	}
	else if(n == 1 || n == 2)
	{
		return "1";
	}
	else if(dp[n] != "")
	{
		return dp[n];
	}
	else
	{
		return dp[n] = string_add(fibonacci(n-1),fibonacci(n-2));
	}
}
int main(void)
{
	int n;
	cin >> n;
	cout << fibonacci(n);
}