#include <stdio.h>
#include <stdbool.h>

int n,q;
int query[100005];
int main()
{
	int T;
	scanf("%d",&n);
	for(int i=0; i<n-1; i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		query[a]++;
		query[b]++;
	}
	scanf("%d",&T);
	while(T--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a == 1)
		{
			if(query[b]-1)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else
		{
			printf("yes\n");
		}
	}
	return 0;
}