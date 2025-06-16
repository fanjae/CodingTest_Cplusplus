#include <iostream>
using namespace std;
int paper[129][129];
int number[2];
void paper_cut(int n, int x, int y)
{
	if (n == 1) // 1개의 색종이가 된 경우
	{
		number[paper[x][y]]++;
	}
	else
	{
		int sum = 0;
		int cut_size = n / 2;

		// 종이의 합을 구함.
		for (int i = x; i < x + n; i++)
		{
			for (int j = y; j < y + n; j++)
			{
				sum += paper[i][j];
			}
		}
		if (sum == 0 || sum == n * n) // 하나의 색종이가 존재
		{
			number[paper[x][y]]++;
		}
		else // 하나의 색종이가 아니면 색종이 분할.
		{
			paper_cut(cut_size, x, y);
			paper_cut(cut_size, x, y + cut_size);
			paper_cut(cut_size, x + cut_size, y);
			paper_cut(cut_size, x + cut_size, y + cut_size);
		}
	}

}
int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> paper[i][j];
		}
	}
	paper_cut(n, 0, 0);

	for (int i = 0; i < 2; i++)
	{
		cout << number[i] << "\n";
	}
}