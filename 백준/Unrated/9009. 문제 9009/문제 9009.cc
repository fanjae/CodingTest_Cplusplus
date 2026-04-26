#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	long long int data[50]={0};
	data[0]=0;
	data[1]=1;
	int T;
	for(long long int i=2; i<50; i++)
	{
		data[i] = data[i-1] + data[i-2];
	}
	scanf("%d",&T);
	while(T--)
	{
		long long int data2[50]={0};
		long long int n;
		scanf("%lld",&n);
		int i=0;
		while(n >= data[i+1])
		{
			i++;
		}
		int max = i;
		int count=0;
		for(int i=max;i>=1;i--)
		{
			if(n - data[i] >= 0)
			{
				n -= data[i];
				data2[count++] = data[i];
			}
		}
		std::sort(data2,data2+count);
		for(int i=0; i<count; i++)
		{
			printf("%d ",data2[i]);
		}
		printf("\n");
	}
}