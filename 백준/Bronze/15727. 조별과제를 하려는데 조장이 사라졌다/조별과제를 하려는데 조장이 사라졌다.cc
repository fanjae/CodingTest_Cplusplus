#include <stdio.h>
int main(void)
{
	int t;
	int count = 0;
	scanf("%d",&t);
	while(t != 0)
	{
		if(t - 5 >= 0)
		{
			count++;
			t -= 5;
			continue;
		}
		else if(t - 4 >= 0)
		{
			count++;
			t -= 4;
			continue;
		}
		else if(t - 3 >= 0)
		{
			count++;
			t -= 3;
		}
		else if(t - 2 >= 0)
		{
			count++;
			t -= 2;
		}
		else if(t - 1 >= 0)
		{
			count++;
			t -= 1;
		}
	}
	printf("%d\n",count);
}