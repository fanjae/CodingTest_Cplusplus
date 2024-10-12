#include <iostream>
using namespace std;
int paper[129][129];
int n;
int white_paper_cnt = 0;
int blue_paper_cnt = 0;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void paper_cutting(int x, int y, int size)
{
	int pivot = paper[x][y];
	bool same_number = true; // 서로 같은 종이인가 체크
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (pivot != paper[i][j])
			{
				same_number = false;
				break;
			}
		}
	}
	if (same_number == true)
	{
		if (paper[x][y] == 0) white_paper_cnt++;
		else if (paper[x][y] == 1) blue_paper_cnt++;
	}
	else
	{
		int cutting_size = size / 2;

		// 정사각형 4개로 쪼갰을때 윗 2개
		paper_cutting(x, y, cutting_size);
		paper_cutting(x, y + cutting_size, cutting_size);

		// 정사각형 4개로 쪼갰을때 아랫 2개
		paper_cutting(x + cutting_size, y, cutting_size);
		paper_cutting(x + cutting_size, y + cutting_size, cutting_size);
	}
	return ;
}
int main(void)
{
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
	cout << white_paper_cnt << "\n";
	cout << blue_paper_cnt << "\n";
}