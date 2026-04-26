#include <stdio.h>
int main(void)
{
	int T=1;
	scanf("%d",&T);
	while(T--)
	{
		int count=101;
		int low=1;
		
		int h,w,b;
		scanf("%d %d %d",&h,&w,&b);
		for(int i=1; i<b; i++)
		{
			count += 100;
			if(i%h==0)
			{
				count = 100;
				low++;
				count += low;
			}
		}
		printf("%d\n",count);
	}
	
}