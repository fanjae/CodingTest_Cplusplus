#include <iostream>
#include <climits>
using namespace std;
int ground[505][505];
int main(void)
{
	int N, M, B;
	int ans_height = 0;
	int ans_time = INT_MAX;

	cin >> N >> M >> B;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> ground[i][j];
		}
	}

	// Point : 목표한 높이로 땅을 맞추기 위한 과정 시작.
	for (int k = 0; k <= 256; k++) 
	{
		int temp_B = B;
		int temp_time = 0;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				if (ground[i][j] > k) // 땅을 파내야 하는 경우
				{
					temp_B += ground[i][j] - k; // 땅 파낸 만큼 넣기
					temp_time += (ground[i][j] - k) * 2;
				}
				else if (ground[i][j] < k) // 인벤토리에 있는 땅을 넣는 경우
				{
					temp_B -= k - ground[i][j];
					temp_time += k - ground[i][j];
				}
				else
				{
					continue;
				}
			}
		}
		
		if (temp_B >= 0) // 다 탐색한 시점에서 인벤토리가 음수면 불가능한 상황.
		{
			if(temp_time <= ans_time)
			{
				ans_time = temp_time;
				ans_height = k;
			}
		}
	}
	cout << ans_time << " " << ans_height;
}