#include <stdio.h>
#include <algorithm>

using namespace std; 

int parent[1005]={0};
typedef struct network
{
	int x;
	int y;
	int value;
}network;

bool compare(const network &edge1, const network &edge2)
{
	return edge1.value < edge2.value;
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
	int n,m;
	long long int ans = 0;
	network edge[100005];
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		parent[i] = i;
	}
	scanf("%d",&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d %d",&edge[i].x,&edge[i].y,&edge[i].value);
	}
	
	sort(edge,edge+m,compare);
	for(int i=0; i<m; i++)
	{
		if(is_same_set(edge[i].x,edge[i].y) == false)
		{
			union_set(edge[i].x,edge[i].y);
			ans = ans + edge[i].value;
		}
	}
	printf("%lld\n",ans);
}