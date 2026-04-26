#include <stdio.h>
#include <algorithm>
using namespace std;
struct point
{
	int x;
	int y;
};
bool cmp(point a,point b)
{
	return a.x < b.x || ((a.x == b.x) && (a.y < b.y));
}
int main()
{
	struct point data[100005];	
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&data[i].x,&data[i].y);
	}
	sort(data,data+n,cmp);
	for(int i=0; i<n; i++)
	{
		printf("%d %d\n",data[i].x,data[i].y);
	}
}