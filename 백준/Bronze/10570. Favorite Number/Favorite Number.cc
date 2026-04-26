#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[1005]={0};
		int max_value = 0;
		int answer = 0;
		int n;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			int temp;
			scanf("%d",&temp);
			data[temp]++;
		}
		
		
		
		for(int i=1; i<=1000; i++)
		{
			if(max_value < data[i])
			{
				max_value = data[i];
				answer = i;
			}
		}
		printf("%d\n",answer);
	}
}
			