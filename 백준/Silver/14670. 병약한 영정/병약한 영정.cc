#include <stdio.h>
int m[105];
int main(void)
{
	int n,q;
	scanf("%d",&n);
	for(int i=0; i<105; i++)
	{
		m[i] = -1;
	}
	for(int i=0; i<n; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		m[x] = y;
	}
	scanf("%d",&q);
	while(q--)
	{
		int size,value;
		int data[105]={0};
		int count = 0;
		scanf("%d",&size);
		for(int i=0; i<size; i++)
		{
			scanf("%d",&data[i]);
			if(m[data[i]] != -1)
			{
				count++;
			}
		}
		if(size != count)
		{
			printf("YOU DIED");
		}
		else
		{
			for(int i=0; i<count; i++)
			{
				printf("%d ",m[data[i]]);	
			}
		}	
		printf("\n");
	}
}