#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int value[1000005] = { 0 };
int cnt[1000005] = { 0 };
int answer[1000005] = { 0 };
stack<pair<int,int>> stk;
int main(void)
{
	int n;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> value[i];
		cnt[value[i]]++;
	}
	for (int i = n; i >= 1; i--)
	{
		while (!stk.empty() && cnt[stk.top().first] <= cnt[value[i]]) // 기존 스택에 들어있는 값이 자신보다 커야 의미가있음. 없으면 다 뺄 것.
		{
			stk.pop();
		}
		if (!stk.empty() && cnt[stk.top().first] > cnt[value[i]]) // 스택에 들어있던 값이 더크면 자신에게 의미가 있음.
		{
			answer[i] = stk.top().first;
		}
		if (stk.empty()) // 비어있었으면, 오등큰수 값이 없음을 의미.
		{
			answer[i] = -1;
		}
		stk.push({ value[i],i });
	}

	for (int i = 1; i <= n; i++)
	{
		cout << answer[i] << " ";
	}
}