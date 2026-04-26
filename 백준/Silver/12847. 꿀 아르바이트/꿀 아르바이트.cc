#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
int que_size = 0;
int n, m;
int data_value[100005];
long long int sum = 0;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void input()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> data_value[i];
	}
}
long long int process()
{
	long long int ans = 0;
	for (int i = 1; i <= n; i++) 
	{
		que.push(data_value[i]); // 큐에 넣음
		sum += data_value[i]; // 합에 더함
		que_size++; // 큐 사이즈 증가.

		if (que_size > m) // 일을 할 수 있는 m일을 넘었으면
		{
			sum -= que.front(); // 맨 앞 값을 빼버림.
			que.pop(); // 큐에서도 뺌
			que_size--; // 큐 사이즈 다시 1 감소.
		}

		if (ans < sum) // 최대값 갱신
		{
			ans = sum;
		}
	}
	return ans;
}
int main(void)
{
	first_init();
	input();
	cout << process() << "\n";
}