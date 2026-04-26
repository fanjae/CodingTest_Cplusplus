#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue <int, vector<int>, greater<int>>pq;
vector<pair <int, int>> data;
int compare(pair <int, int> &data, pair <int, int> &data2)
{
	return data.first < data2.first;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		data.push_back(make_pair(x,y));			
	}
	sort(data.begin(),data.end(),compare);
	
	for(int i=0; i<n; i++)
	{
		if(pq.empty() || pq.top() > data[i].first)
		{
			pq.push(data[i].second);	
		}
		else
		{
			pq.pop();
			pq.push(data[i].second);
		}
	}
	printf("%d\n",pq.size());
}