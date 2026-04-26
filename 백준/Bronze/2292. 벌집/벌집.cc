#include <stdio.h>
int main()
{
	int n;
	int i;
	int count=1;
	scanf("%d",&n);
	for(i=0; i<=1000000001; i++)
	{
		count += i*6;
		if(n > count)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	printf("%d\n",i+1);
}