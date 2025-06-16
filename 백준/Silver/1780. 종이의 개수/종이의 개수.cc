#include <iostream>
using namespace std;
int paper[2500][2500];
int minus_paper_cnt = 0;
int zero_paper_cnt = 0;
int one_paper_cnt = 0;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void paper_cutting(int x, int y, int size)
{
	int pivot = paper[x][y];
	bool paper_same = true;
	for (int i = x; i < x + size; i++) // 그대로 사용 가능한 종이인가 검사
	{
		for (int j = y; j < y + size; j++)
		{
			if (pivot != paper[i][j]) paper_same = false;
		}
	}

	if (paper_same == true) // 하나의 종이인 경우.
	{
		if (paper[x][y] == -1) minus_paper_cnt++;
		else if (paper[x][y] == 0) zero_paper_cnt++;
		else if (paper[x][y] == 1) one_paper_cnt++;
	}
	else
	{
		int cut_size = size / 3; 

		// 1행 ~ 3행
		paper_cutting(x, y, cut_size);
		paper_cutting(x, y + cut_size, cut_size);
		paper_cutting(x, y + cut_size * 2, cut_size);

		// 4행 ~ 6행
		paper_cutting(x + cut_size, y, cut_size);
		paper_cutting(x + cut_size, y + cut_size, cut_size);
		paper_cutting(x + cut_size, y + cut_size * 2, cut_size);

		// 7행 ~ 9행
		paper_cutting(x + cut_size * 2, y, cut_size);
		paper_cutting(x + cut_size * 2, y + cut_size, cut_size);
		paper_cutting(x + cut_size * 2, y + cut_size * 2, cut_size);
	}
	return;
}
int main(void)
{
	int n;
	first_init();
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> paper[i][j];
		}
	}
	paper_cutting(0, 0, n);
	cout << minus_paper_cnt << "\n";
	cout << zero_paper_cnt << "\n";
	cout << one_paper_cnt << "\n";
}