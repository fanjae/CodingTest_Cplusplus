#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	int flag = 1;
	int sq_n;
	int data[100005];
	int count = 0;
	scanf("%d",&n);
	sq_n = sqrt(n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=1; i<=sq_n; i++)
	{
		if(n % i == 0)
		{
			count++;
			count++;
		}
		if(count > 2)
		{
			flag = 0;
			break;
		}
	}
	if(flag)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}