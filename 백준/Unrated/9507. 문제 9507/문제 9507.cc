#include <stdio.h>
unsigned long long int data[70]={1,1,2,4};
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int su;
		scanf("%d",&su);
		if(su < 4)
		{
			printf("%lld\n",data[su]);
		}
		else
		{
			for(int i=4; i<=su; i++)
			{
				data[i] = data[i-1] + data[i-2] + data[i-3] + data[i-4];
			}
			printf("%lld\n",data[su]);
		}
		
	}
}