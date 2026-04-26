#include <stdio.h>
bool find[100000005];
int main(void)
{
	int n,c;
	int data[5005];
	scanf("%d %d",&n,&c);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
		find[data[i]] = true;
	}
	
	if(find[c] == true)
	{
		printf("1");
		return 0;
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i == j)
			{
				continue;
			}
			int sum = data[i] + data[j];
			int target = c - sum;
			if(target < 0)
			{
				continue;
			}
			
			if(target == 0)
			{
				printf("1");
				return 0;
			}
			else
			{
				if(data[i] != target && data[j] != target && find[target] == true)
				{
					printf("1");
					return 0;
				}
			}
		}
	}
	printf("0");
	return 0;
}