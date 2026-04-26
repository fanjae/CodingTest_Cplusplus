#include <stdio.h>
#include <algorithm>

using namespace std;
int data[1000005];
bool compare(int a, int b)
{
	return a>b;
}
int main(void)
{
	int n;
	int sum = 0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n,compare);
	
	for(int i=0; i<n-2; i++)
	{
		if(data[i] < (data[i+1] + data[i+2]))
		{
			sum = data[i] + data[i+1] + data[i+2];
			printf("%d\n",sum);
			return 0;
		}
	}
	if(sum == 0)
	{
		printf("-1");
	}
}
	