#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int max_value = 2000000000;
	scanf("%d",&n);
	
	int data[100005];
	int value[2];
	int start = 0;
	int end = n-1;
	
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	
	while(start < end)
	{
		int sum = data[start] + data[end];
		if(abs(sum) < max_value)
		{
			max_value = abs(sum);
			value[0] = data[start];
			value[1] = data[end];
		}
		
		if(sum == 0)
		{
			value[0] = data[start];
			value[1] = data[end];
			break;
		}
		else if(sum > 0)
		{
			end--;
		}
		else if(sum < 0)
		{
			start++;
		}
	}
	printf("%d %d\n",value[0],value[1]);
	
}