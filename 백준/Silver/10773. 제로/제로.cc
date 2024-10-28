#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
	int n;
	long long int answer = 0;
	stack <int> value;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while (n--)
	{
		int temp;
		cin >> temp;
		if (temp == 0)
		{
			value.pop();
		}
		else
		{
			value.push(temp);
		}
	}
	while (!value.empty())
	{
		answer += value.top();
		value.pop();
	}
	cout << answer;
}