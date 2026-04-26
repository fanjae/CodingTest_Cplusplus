#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main(void)
{
	int count=1;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		int max=0;
		int max2=0;
		int min=100;
		int data[105];
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			scanf("%d",&data[i]);
			if(max < data[i])
			{
				max = data[i];
			}
			if(min > data[i])
			{
				min = data[i];
			}
		}
		sort(data,data+n,compare);
		for(int i=0;i<n-1;i++)
		{
			if(max2 < data[i]-data[i+1])
			{
				max2 = data[i]-data[i+1];
			}
		}
		printf("Class %d\n",count++);
		printf("Max %d, Min %d, Largest gap %d\n",max,min,max2);
	}
}