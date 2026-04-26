#include <stdio.h>
#include <algorithm>
using namespace std;
int data[5000005];
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	printf("%d\n",data[k-1]);
}