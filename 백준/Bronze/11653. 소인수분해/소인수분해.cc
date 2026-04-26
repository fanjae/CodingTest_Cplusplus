#include <stdio.h>
int main()
{
	int data[1005]={0};
	int n;
	int index=0;
	scanf("%d",&n);
	while(n > 1)
	{
		for(int i=2; i<=n; i++)
		{
			if(n % i == 0)
			{
				n /= i;
				data[index] = i;
				index++;
				break;
			}
		}
	}
	for(int i=0; i<index;i++)
	{
		printf("%d\n",data[i]);
	}
}