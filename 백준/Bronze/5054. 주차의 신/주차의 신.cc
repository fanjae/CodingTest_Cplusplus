#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[25]={0};
		int data2[25]={0};
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
			if(i == n - 1)
			{
				data2[i] = data[i] - data[0];
			}
			else
			{
				data2[i] = data[i+1] - data[i];
			}
			sum = sum + data2[i];
		}
		printf("%d\n",sum);	
	}
}