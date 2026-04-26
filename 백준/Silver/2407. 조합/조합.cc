#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

string dp[1005][1005];
string string_add(string a, string b)
{
	int sum = 0;
	string temp;
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
		temp.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(temp.begin(),temp.end());
	return temp;
}
string combination(int n, int m)
{
	if(n == m || m == 0)
	{
		return "1";	
	}
	else
	{
		string &temp = dp[n][m];
		if(temp != "")
		{
			return temp;
		}
		else
		{
			return temp = string_add(combination(n-1,m-1),combination(n-1,m));
		}
	}
		
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	cout << combination(n,m);
}