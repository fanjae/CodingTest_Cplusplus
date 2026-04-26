#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
int max_value = 0;
int parent[100005];
struct node
{
	int x;
	int y;
	int value;
};

vector <node> data;

bool compare(const node &dat1,const node &dat2)
{
	return dat1.value < dat2.value;
}
int find(int x)
{
	if(x == parent[x])
	{
		return parent[x];
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
	long long int ans = 0;
	
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		parent[i] = i;
	}
	for(int i=0; i<m; i++)
	{
		node temp;
		scanf("%d %d %d",&temp.x,&temp.y,&temp.value);
		data.push_back(temp);
	}
	sort(data.begin(),data.end(),compare);
	for(int i=0; i<m; i++)
	{
		if(is_same_set(data[i].x,data[i].y) == false)
		{
			union_set(data[i].x,data[i].y);	
			if(data[i].value > max_value)
			{
				max_value = data[i].value;
			}
			ans += data[i].value;
		}
	}
	printf("%lld\n",ans-max_value);
}