#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	int sum2 = 0;
	
	scanf("%d",&n);
	while(n--)
	{
		int value;
		int a,b;
		scanf("%d",&value);
		
		a = b = value;
		
		while(a >= 0)
		{
			a -= 30;
			sum += 10;
					
		}
		while(b >= 0)
		{
			b -= 60;
			sum2 += 15;
		}
	}
	if(sum > sum2)
	{
		printf("M %d\n",sum2);
	}
	else if(sum < sum2)
	{
		printf("Y %d\n",sum);
	}
	else
	{
		printf("Y M %d\n",sum);
	}
}