#include <stdio.h>
int main(void)
{
	int e,f,c;
	scanf("%d %d %d",&e,&f,&c);
	
	int count = 0;
	int new_bottle = 0;
	int set = e + f;
	while(set >= c)
	{
		set -= c;
		set++;
		count++;
	}
	printf("%d\n",count);
}