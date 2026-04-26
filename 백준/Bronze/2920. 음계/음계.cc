#include <stdio.h>
int main()
{
	int a[10];
	int i;
	int sum=0;
	for(i=1;i<=8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=7;i++)
	{
		if(a[i] < a[i+1])
		{
			sum++;
		}
		else if(a[i] > a[i+1])
		{
			sum--;
		}
	}
	if(sum == 7)
	{
		printf("ascending");
	}
	else if(sum == -7)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
}