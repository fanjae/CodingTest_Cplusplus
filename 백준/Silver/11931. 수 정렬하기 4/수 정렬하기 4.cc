#include <stdio.h>
#include <algorithm>
using namespace std;
int data[1000005]={0};
int compare(int a, int b)
{
	return a>b;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n,compare);
	for(int i=0; i<n; i++)
	{
		printf("%d\n",data[i]);
	}
}