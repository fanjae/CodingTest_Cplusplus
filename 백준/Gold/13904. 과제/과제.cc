#include <cstdio>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
	return a.second > b.second;
}
int main()
{
	int n;
	int day[1005]={0};
	int sum=0;
	pair<int, int> data[1005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&data[i].first,&data[i].second);
	}
	sort(data,data+n,compare);
	
	
	for(int i=0; i<n; i++)
	{
		for(int j=data[i].first; j>=1; j--)
		{
			if(day[j] == 0)
			{
				day[j] = data[i].second;
				break;
			}
		}
	}
	
	for(int i=1; i<=1000; i++)
	{
		sum += day[i];
	}
	printf("%d\n",sum);
}