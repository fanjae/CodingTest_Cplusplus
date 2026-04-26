#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	
	int value;
	int ans = 0;
	int data[100005];
	int start = 0;
	int end = n-1;
	int sum = 0;
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("%d",&value);
	if(n == 1)
	{
		printf("0");
		return 0;
	}	
	
	sort(data,data+n);
	
	while(start < end)
	{
		sum = data[start] + data[end];
		if(sum == value)
		{
			ans++;
			start++;
			end--;
		}
		else
		{
			if(sum < value)
			{
				start++;
			}
			else
			{
				end--;
			}
		}
	}
	printf("%d\n",ans);
}
	