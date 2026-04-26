#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b;
		int ans = 1;
		scanf("%d %d",&a,&b);
		ans = a;
		for(int i=1; i<b; i++)
		{
			ans = (ans * a) % 10;
		}
		if(ans >= 11)
		{
			ans = ans % 10;
		}
		if(ans == 0)
		{
			ans = 10;
		}
		printf("%d\n",ans);
	}
}