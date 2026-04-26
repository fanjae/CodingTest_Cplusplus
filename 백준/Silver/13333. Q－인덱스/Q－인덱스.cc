#include <stdio.h>
#include <algorithm>
using namespace std;
int compare(int a,int b)
{
	return a>b;
}
int main(void)
{
	int n;
	int data[1005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=n; i>=0; i--)
	{
		int count = 0;
		for(int j=0; j<n; j++)
		{
			if(data[j] >= i)
				count++;
		}		
	
		if(count >= i)
		{
			printf("%d",i);
			return 0;
		}
	}		
}