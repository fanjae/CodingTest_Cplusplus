#include <stdio.h>
#include <algorithm>
int data[2250005];
int n;
int main(void)
{
	scanf("%d",&n);
	for(int i=0; i<n*n; i++)
	{
		scanf("%d",&data[i]);
	}
	std::sort(data,data+(n*n));
	printf("%d",data[n*n-n]);
}