#include <stdio.h>
#include <algorithm>
using namespace std;
int data[2000005];
int data2[1000005];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d",&data2[i]);
	}
	for(int i=0; i<m; i++)
	{
		data[n+i] = data2[i];
	}
	sort(data,data+n+m);
	for(int i=0; i<n+m; i++)
	{
		printf("%d ",data[i]);
	}
}