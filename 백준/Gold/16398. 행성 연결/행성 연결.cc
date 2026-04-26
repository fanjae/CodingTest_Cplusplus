#include <stdio.h>
#include <algorithm>

using namespace std;
struct Node
{
	int x;
	int y;
	long long int value;
};

bool compare(struct Node &dat1, struct Node &dat2)
{
	return dat1.value < dat2.value;
}

int parent[1005];
Node data[1000005];

int find(int x)
{
	if(parent[x] == x)
	{
		return x;
	}
	else
	{
		return parent[x] = find(parent[x]);
	}
}
bool union_find(int x, int y)
{
	x = find(x);
	y = find(y);
	
	if(x != y)
	{
		parent[y] = x;	
		return false;
	}
	else
	{
		return true;
	}	
}


int main(void)
{
	int n;
	int node_count=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		parent[i] = i;
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			long long int temp;
			scanf("%lld",&temp);
			if(i >= j)
			{
				continue;
			}
			else
			{
				data[node_count].x = i;
				data[node_count].y = j;
				data[node_count].value = temp;
				node_count++;
			}
		}
	}
	
	sort(data,data+node_count,compare);
	long long int sum = 0;
	for(int i=0; i<node_count; i++)
	{
		if(union_find(data[i].x,data[i].y) == false)
		{
			sum += data[i].value;
		}
	}
	printf("%lld\n",sum);
}