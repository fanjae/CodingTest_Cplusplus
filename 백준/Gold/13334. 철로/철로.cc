#include <stdio.h>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
int x[100005];
int y[100005];
pair < int, int > data[200005];
int main(void)
{
	int n;
	int d;
	int cnt = 0;
	int sum = 0;
	int ans = 0;
	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	scanf("%d",&d);
	for(int i=0; i<n; i++)
	{
		if(x[i] > y[i])
		{
			swap(x[i],y[i]);
		}
		if(y[i] - x[i] > d)
		{
			continue;
		}
		data[cnt++] = make_pair(y[i]-d, -1);
		data[cnt++] = make_pair(x[i],1);
	}	
	sort(data,data+cnt);
	for(int i=0; i<cnt; i++)
	{
		sum -= data[i].second;
		if(ans < sum)
		{
			ans = sum;
		}
	}
	printf("%d",ans);
}
			