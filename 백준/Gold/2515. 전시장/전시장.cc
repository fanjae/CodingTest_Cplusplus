#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;

typedef struct my_pair
{
	int first;
	int second;
}my_pair;
my_pair data[300005];
int dp[300005] = {0};

bool compare(const my_pair &a, const my_pair &b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}
int main(void)
{
	int n, limit_height;
	int ans_max = 0;


	scanf("%d %d", &n, &limit_height);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &data[i].first, &data[i].second);
	}
	sort(data+1, data + n + 1, compare);

	for (int i = 1, j=0; i <= n; i++)
	{
		while(data[j+1].first <= data[i].first - limit_height) j++;
		dp[i] = max(dp[i-1], dp[j] + data[i].second);
		if(ans_max < dp[i]) ans_max = dp[i];
	}
	printf("%d\n",ans_max);
}
