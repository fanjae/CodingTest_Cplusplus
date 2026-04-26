#include <iostream>
#include <queue>
using namespace std;
int x, n;
int data_value[250005];
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void input()
{
	cin >> x >> n;
	for (int i = 1; i <= x; i++)
	{
		cin >> data_value[i];
	}
}
void process()
{
	int sum = 0;
	int ans = 0;
	int ans_count = 0;
	int que_size = 0;

	queue <int> que;
	for (int i = 1; i <= x; i++)
	{
		sum += data_value[i]; // 합계에 합침.
		que.push(data_value[i]); // que에 값 넣음
		que_size++;

		if (que_size > n) // que가 공간 넘어간 경우 맨 앞자리 값 삭제
		{
			sum -= que.front();
			que.pop();
			que_size--;
		}
		
		if (ans < sum) // 최대값 갱신
		{
			ans = sum;
			ans_count = 1; // 이 값과 동일한 값(기간)은 1개.
		}
		else if (ans == sum) // 최대값과 동일한 경우 기간 증가.
		{
			ans_count++;
		}
	}
	if (ans == 0) // 최대 방문자수가 0인 경우
	{
		cout << "SAD";
	}
	else
	{
		cout << ans << "\n";
		cout << ans_count << "\n";
	}

}
int main(void)
{
	first_init();
	input();
	process();
}