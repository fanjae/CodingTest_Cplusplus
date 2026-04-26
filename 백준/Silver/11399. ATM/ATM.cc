#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int data[1005];
	int n;
	int sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			sum = sum + data[j];
		}
	}
	printf("%d\n",sum);
}