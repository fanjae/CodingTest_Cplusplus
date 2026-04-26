#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int count=0;
		int data[105];
		int n,k;
		scanf("%d %d",&n,&k);
		for(int i=0; i<n; i++)
		{
			scanf("%d",&data[i]);
		}
		for(int i=0; i<n; i++)
		{
			while(data[i] >= 0)
			{
				if(data[i] - k < 0)
				{
					break;
				}
				else
				{
					data[i] -= k;
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}