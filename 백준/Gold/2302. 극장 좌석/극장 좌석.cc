#include <stdio.h>
int main(void)
{
	int temp=0;
	int count=0;
	int sum=1;
	int data[45]={1,1,2};
	int n,m;
	int index=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=2; i<=n; i++)
	{
		data[i] = data[i-1] + data[i-2];
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d",&index);
		sum *= data[index-temp-1];
		temp = index;
	}
	sum *= data[n-index];
	printf("%d\n",sum);
}