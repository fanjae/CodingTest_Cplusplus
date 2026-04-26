#include <stdio.h>
#include <math.h>
int n,m;
int arr[1000005]={0};
int data[100005]={0};
void eratos(int m)
{
	for(int i=2; i<=m; i++)
	{
		arr[i] = 1;
	}
	for(int i=2; i<=sqrt(m); i++)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(int j=i+i; j<=m; j+=i)
		{
			arr[j] = 0;
		}
	}
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n > m)
	{
		int swap;
		swap = n;
		n = m;
		m = swap;
	}
	eratos(m);
	for(int i = n; i<=m; i++)
	{
		if(arr[i] == 1)
		{
			printf("%d\n",i);
		}
	}
}