#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int count=0;
		int n;
		scanf("%d",&n);
		printf("Pairs for %d: ",n);
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(i+j == n && i < j)
				{
					++count;
					if(count >= 2)
					{
						printf(", ");
					}
					printf("%d %d",i,j);
				}
			}
		}
		printf("\n");
	}
}