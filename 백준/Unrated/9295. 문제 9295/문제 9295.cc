#include <stdio.h>
int main()
{
	int c=1;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("Case %d: %d\n",c++,a+b);
	}
}