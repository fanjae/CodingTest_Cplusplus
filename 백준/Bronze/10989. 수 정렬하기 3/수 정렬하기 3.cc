#include <stdio.h>
#include <algorithm>
using namespace std;
int data[10005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int temp;
		scanf("%d",&temp);
		data[temp-1]++;
	}
	for(int i=0; i<10005; i++)
	{
		if(data[i])
		{
			for(int j=0; j<data[i]; j++)
			{
				printf("%d\n",i+1);
			}
		}
	}
}