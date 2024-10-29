#include <iostream>
#include <stack>
using namespace std;
stack<int> value;
int main(void)
{
	int n;
	long long int answer = 0;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		while (!value.empty() && value.top() <= temp)
		{
			value.pop();
		}
		if (!value.empty() && value.top() > temp)
		{
			answer += value.size();
		}
		value.push(temp);
	}
	cout << answer;
}