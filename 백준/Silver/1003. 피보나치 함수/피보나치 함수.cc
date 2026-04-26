#include <stdio.h>
int main(void)
{
	int i,j;
	int n,su;
	int a[45][2]={{1,0},{0,1}};
	scanf("%d",&su);
	for(i=1;i<=su;i++)
	{
		scanf("%d",&n);
		for(j=2;j<=n;j++)
		{
			a[j][0] = a[j-1][0] + a[j-2][0];
			a[j][1] = a[j-1][1] + a[j-2][1];
		}
		printf("%d %d\n",a[n][0],a[n][1]);
	}
}