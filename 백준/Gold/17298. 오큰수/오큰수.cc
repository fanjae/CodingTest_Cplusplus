#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int value[1000005];
int answer[1000005];
stack <pair<int,int>> stk;
int main(void)
{
	int n;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> value[i];
	}
	for (int i = 1; i <= n; i++)
	{
		while (!stk.empty() && stk.top().first < value[i]) // 나보다 큰 수가 등장했다면, 그 수는 나의 오큰수이다.
		{
			answer[stk.top().second] = value[i]; // 해당 인덱스의 오큰수로 갱신.
			stk.pop(); // 스택에서 꺼낸다.
		}
		stk.push({ value[i], i }); // 해당값은 스택에 넣는다.
	}
	while (!stk.empty()) // 끝까지 탐색 후 오큰수를 찾지 못했다면 모두 -1로 갱신.
	{
		answer[stk.top().second] = -1;
		stk.pop();
	}
	for (int i = 1; i <= n; i++)
	{
		cout << answer[i] << " ";
	}

}