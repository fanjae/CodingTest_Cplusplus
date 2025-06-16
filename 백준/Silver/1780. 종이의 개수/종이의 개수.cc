#include <iostream>
using namespace std;
int paper_num[3]; // minus, zero, one;
int paper[2187][2187] = { 0 }; // paper
void paper_cut(int n, int x, int y)
{
	if (n == 1)
	{
		paper_num[paper[x][y] + 1]++;
		return ;
	}
	else
	{
		bool same = true;
		int set_paper = paper[x][y];
		int cut_size = n / 3;
		int sum = 0;
		for (int i = x; i < x + n; i++)
		{
			for (int j = y; j < y + n; j++)
			{
				if (set_paper != paper[i][j])
				{
					same = false;
					break;
				}
			}
		}
		
		if (same) paper_num[set_paper + 1]++; // 모두가 동일한 종이면 하나의 종이.
		else // 아니라면 쪼개서 판단
		{
			paper_cut(cut_size, x, y);
			paper_cut(cut_size, x, y + cut_size);
			paper_cut(cut_size, x, y + cut_size * 2);

			paper_cut(cut_size, x + cut_size, y);
			paper_cut(cut_size, x + cut_size, y + cut_size);
			paper_cut(cut_size, x + cut_size, y + cut_size * 2);

			paper_cut(cut_size, x + cut_size * 2, y);
			paper_cut(cut_size, x + cut_size * 2, y + cut_size);
			paper_cut(cut_size, x + cut_size * 2, y + cut_size * 2);
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
	for (int i = 0; i <= 2; i++)
	{
		cout << paper_num[i] << "\n";
	}

}