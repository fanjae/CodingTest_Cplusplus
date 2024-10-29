#include <iostream>
#include <stack>
using namespace std;
stack <pair<int,int>> value;
int answer[500005] = { 0 };
int tower[500005];
int main(void)
{
	int n;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		cin >> tower[i];
	}

	for (int i = 1; i <= n; i++)
	{
		while (!value.empty() && tower[i] > value.top().first) // 나보다 값이 작으면 해당 인원은 레이저를 받지 못함.
		{
			value.pop();
		}
		if (value.empty()) // 스택에 아무것도 없다는 것은 레이저를 받아줄 녀석이 없음.
		{
			answer[i] = 0;
		}
		else // 나보다 큰 녀석이 존재함. 해당 녀석의 인덱스가 내 정답임.
		{
			answer[i] = value.top().second;
		}
		value.push({ tower[i],i });
	}

	for (int i = 1; i <= n; i++)
	{
		cout << answer[i] << " ";
	}
}