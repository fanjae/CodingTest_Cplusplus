#include <stdio.h>
int main(void)
{
	int sum=0;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,k;
		scanf("%d %d",&m,&k);
		sum += k % m;
	}
	printf("%d\n",sum);
}