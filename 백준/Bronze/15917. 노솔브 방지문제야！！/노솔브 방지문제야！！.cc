#include <stdio.h>
int main(void)
{
	int n;
	int cnt;
	scanf("%d",&cnt);
	while(cnt--)
	{
		scanf("%d",&n);
		if((n & -n) == n)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
}