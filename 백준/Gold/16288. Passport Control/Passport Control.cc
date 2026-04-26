#include <stdio.h>
int main(void)
{
	int n,k;
	int queue[105]={0};
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++)
	{
		int real = 0;
		int value;
		scanf("%d",&value);
		
		for(int j=0; j<k; j++)
		{
			if(queue[j] < value)
			{
				queue[j] = value;
				real = 1;
				break;
			}
		}
		
		if(real == 0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}