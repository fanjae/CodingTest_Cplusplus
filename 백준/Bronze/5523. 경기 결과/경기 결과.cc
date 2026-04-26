#include <stdio.h>
int main()
{
	int a=0,b=0;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		
		int n,m;
		scanf("%d %d",&n,&m);
		if(n > m)
		{
			a++;
		}
		else if(n < m)
		{
			b++;
		}
	}
	printf("%d %d\n",a,b);
}