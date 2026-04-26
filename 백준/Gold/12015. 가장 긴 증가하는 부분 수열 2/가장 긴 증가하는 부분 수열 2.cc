#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int data[1000005];
vector <int> list;	
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		if(list.empty() || list.back() < data[i])
		{
			list.push_back(data[i]);
		}
		else
		{
			int index = lower_bound(list.begin(),list.end(),data[i])-list.begin();
			list[index] = data[i];
		}
	}
	
	printf("%d\n",list.size());
}