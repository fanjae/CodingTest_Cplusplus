#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		int index=0;
		int data[10005]={0};
		scanf("%d",&n);
		while(n > 0)
		{
			data[index++] = n % 2;
			n /= 2;
		}
		for(int i=0; i<index; i++)
		{
			if(data[i])
			{
				printf("%d ",i);
			}
		}
	}
}