#include <stdio.h>
int main()
{
	int T=1;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d + %d = %d\n",T++,a,b,a+b);
	}
}