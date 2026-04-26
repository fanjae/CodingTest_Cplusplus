#include <stdio.h>
#include <math.h>
int arr[300000]={0};
void eratos()
{
	for(int i=2; i<300000; i++)
	{
		arr[i] = 1;
	}
	for(int i=2; i<sqrt(300000); i++)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(int j=i+i; j<300000; j+=i)
		{
			arr[j] = 0;	
		}
	}
}
int main(void)
{
	int n = 1;
	eratos();
	while(n != 0)
	{
		int count = 0;
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		for(int i=n+1; i<=2*n; i++)
		{
			if(arr[i] == 1)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}
	
	