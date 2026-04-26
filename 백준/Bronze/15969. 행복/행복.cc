#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int data[1005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	printf("%d\n",data[n-1]-data[0]);
	
}