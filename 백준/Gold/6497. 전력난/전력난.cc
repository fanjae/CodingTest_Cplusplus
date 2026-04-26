#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;
int parent[200005];

struct road
{
	int x;
	int y;
	int value;	
};

bool compare (const struct road &dat1, const struct road &dat2)
{
	return dat1.value < dat2.value;
}

int find(int x)
{
	if(x == parent[x])
	{
		return x;
	}
	else
	{
		return parent[x] = find(parent[x]);
	}
}

bool union_set(int x, int y)
{
	x = find(x);
	y = find(y);
	
	if(x == y)
	{
		return false;
	}
	else
	{
		parent[y] = x;
		return true;
	}
}
int main(void)
{
	int n,m;
	while(1)
	{
		long long int ans = 0;
		long long int sum = 0;
		vector <road> data;
		
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i=0; i<m; i++)
		{
			road temp;
			scanf("%d %d %d",&temp.x,&temp.y,&temp.value);
			sum += temp.value;
			data.push_back(temp);
		}
		
		int vec = data.size();
		for(int i=0; i<vec; i++)
		{
			parent[i] = i;
		}
		
		sort(data.begin(),data.end(),compare);
		
		for(int i=0; i<m; i++)
		{
			if(union_set(data[i].x,data[i].y) == true)
			{
				ans += data[i].value;
			}
		}
		
		printf("%lld\n",sum-ans);
				
	}
}