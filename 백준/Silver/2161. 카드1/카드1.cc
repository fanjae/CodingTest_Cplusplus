#include <iostream>
#include <queue>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue <int> Queue;

	int n;
	int front_data;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		Queue.push(i);
	}

	while (!Queue.empty())
	{
		front_data = Queue.front(); // 1) 제일 위 카드 획득
		cout << front_data << " "; 
		Queue.pop(); // 제일 위 카드 버린다.
		if (!Queue.empty())
		{
			front_data = Queue.front(); // 가장 맨 앞 카드
			Queue.pop(); // 우선 버리고..
			Queue.push(front_data); // 뒤로 옮김.
		}
	}
}