#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[100005];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (n % 2 == 1) // 홀수에서 시작하면 절대 못이김
	{
		cout << "Bob";
		return 0;
	}
	else // 짝수인 경우, 정렬 후 판단.
	{
		sort(a, a + n, greater<int>());
	}

	// Alice의 

	long long int a_sum = 0;
	long long int b_sum = 0;
	for (int i = 0; i < n / 2; i++) 
	{
		a_sum += a[i]; // 내림차순 탐색
		b_sum += a[n - i - 1]; // 오름차순 탐색 

		if (a_sum <= b_sum) // 한번이라도 높으면 Alice 패
		{
			cout << "Bob";
			return 0;
		}
	}
	cout << "Alice";
	return 0;
}