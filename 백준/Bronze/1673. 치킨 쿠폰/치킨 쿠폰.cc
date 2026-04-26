#include <stdio.h>
int main(void)
{
	int e,c;
	while(scanf("%d %d",&e,&c) != EOF)
	{	
		int count = 0;
		int set = e;
		while(set >= c)
		{
			set -= c;
			set++;
			count++;
		}
	printf("%d\n",e+count);
	}

}