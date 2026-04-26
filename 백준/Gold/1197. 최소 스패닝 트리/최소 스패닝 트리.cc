#include <stdio.h>
#include <algorithm>

using namespace std;
typedef struct edge
{
	int x;
	int y;
	int value;
}edge;

edge node[100005];
int parent[10005]={0};

bool compare(const edge &dat1, const edge &dat2)
{
	return dat1.value < dat2.value;
}
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
void union_set(int x, int y)
{
	x = find(x);
	y = find(y);
	
	if(x != y)
	{
		parent[y] = x;
	}
}
bool is_same_set(int x, int y)
{
	x = find(x);
	y = find(y);
	
	if(x == y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(void)
{
	int v,e;
	long long int ans = 0;
	scanf("%d %d",&v,&e);
	for(int i=1; i<=v; i++)
	{
		parent[i] = i;
	}
	for(int i=0; i<e; i++)
	{
		scanf("%d %d %d",&node[i].x,&node[i].y,&node[i].value);
	}
	sort(node,node+e,compare);
	for(int i=0; i<e; i++)
	{
		if(is_same_set(node[i].x,node[i].y) == false)
		{
			union_set(node[i].x,node[i].y);
			ans += node[i].value;
		}
		else
		{
			continue;	
		}
	}
	printf("%lld\n",ans);
}