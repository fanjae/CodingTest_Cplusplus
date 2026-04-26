#include <iostream>
#include <queue>
using namespace std;
int sushi[3000005];
int eating_sushi[3005];
queue <int> sushi_plate;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d, k, c;
	int ans = 0;
	int sushi_slot = 0;
	int max_ans = 0;

	cin >> n >> d >> k >> c;
	for (int i = 0; i < n; i++)
	{
		cin >> sushi[i];
	}

	int start = 0;
	bool coupon = true;
	while (start < n + k)
	{
		if (sushi_slot == k) // 맨앞 그릇 제거 과정
		{
			int sushi_number = sushi_plate.front();
			sushi_plate.pop(); // queue에서 맨앞 그릇 제거
			sushi_slot--; // 그릇 개수 감소
			eating_sushi[sushi_number]--;

			if (eating_sushi[sushi_number] == 0)
			{
				ans--;
				if (sushi_number == c)
				{
					coupon = true;
				}
			}


		}

		if (eating_sushi[sushi[start % n]] == 0)
		{
			ans++;
		}
		eating_sushi[sushi[start % n]]++; // 먹은것 처리

		if (sushi[start % n] == c) // 먹은 초밥이 쿠폰과 일치하면, 쿠폰 사용해도.. 의미 없음.
		{
			coupon = false;
		}

		sushi_plate.push(sushi[start % n]);
		sushi_slot++;
		start++;

		if (coupon) max_ans = max(max_ans, ans + 1);
		else max_ans = max(max_ans, ans);
		
	}
	cout << max_ans;
}