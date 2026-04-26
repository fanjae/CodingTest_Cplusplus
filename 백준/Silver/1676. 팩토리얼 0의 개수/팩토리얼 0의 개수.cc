#include <stdio.h>
int main(void)
{
	int n;
	int ans = 0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		if(i % 5 == 0)
		{
			ans++;
		}
		if(i % 25 == 0)
		{
			ans++;
		}
		if(i % 125 == 0)
		{
			ans++;
		}
	}
	printf("%d",ans);
}