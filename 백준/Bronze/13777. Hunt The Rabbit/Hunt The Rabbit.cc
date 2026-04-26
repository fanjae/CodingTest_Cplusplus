#include <stdio.h>
void binary_search(int start, int end, int target)
{
	int mid = (start + end) / 2;
	printf("%d ",mid);
	if(mid < target)
	{
		start = mid + 1;
	}
	else if(mid > target)
	{
		end = mid - 1;
	}
	else
	{
		return ;
	}
	binary_search(start,end,target);
}
int main(void)
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		binary_search(1, 50, n);
		printf("\n");
	}
}