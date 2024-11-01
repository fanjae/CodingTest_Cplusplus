#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
stack <pair<int, int>> stk;
int value[500005];
long long int answer = 0;
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
		int temp = 0;
		while (!stk.empty() && stk.top().first < value[i]) // 스택에 있는 값보다 자신이 더 크면, 해당 인원들은 더 이상 쌍을 만들 수 없고, 그 값과 자신은 쌍을 만들 수 있음.
		{
			stk.pop();
			answer++;
		}
		if(!stk.empty() && stk.top().first == value[i]) // 만약 top에 같은 값이 있는 경우, 그 top에 있는 값이 만든 쌍의 개수(temp)만큼 쌍을 만들 수 있음. 거기에 자기 자신값을 더함.
		{
			temp = stk.top().second + 1;
			answer += temp;
		}
		else if (!stk.empty() && stk.top().first > value[i]) // 나보다 큰 값이 이미 등장했다면, 내 이전값중에 쌍을 만들 수 있는건 1개 값. 
		{
			temp = 1;
			answer += temp;
		}
		stk.push({ value[i], temp });
	}
	cout << answer;
}