#pragma warning (disable:4996)
#include <stdio.h>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int set[100005] = { 0 };
int main(void)
{
	int n, k, w, v;
	vector<pair<int,int> > data;
	data.push_back(make_pair(0, 0));

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &w, &v);
		data.push_back(make_pair(w, v));
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = k; j >= 1; j--)
		{
			if (data[i].first <= j)
			{
				set[j] = max(set[j], set[j - data[i].first] + data[i].second);
			}
		}
	}

	printf("%d\n", set[k]);
}