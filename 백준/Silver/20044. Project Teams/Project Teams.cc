#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	int data[10005];
	scanf("%d",&n);
	for(int i=0; i<2*n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+2*n);
	
	int x=0;
	int y=2*n-1;
	
	int min = 200005;
	while(x <= y)
	{
		int sum = 0;
		sum = data[x] + data[y];
		
		if(min > sum)
		{
			min = sum;
		}
		x++;
		y--;
	}
	printf("%d",min);
}