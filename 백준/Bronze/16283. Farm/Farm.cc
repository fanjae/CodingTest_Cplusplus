#include <stdio.h>
int main(void)
{
	int a,b,n,w;
	int set = 0;
	int result = 0;
	int ans = 0;
	scanf("%d %d %d %d",&a,&b,&n,&w);
	for(int i=1; i<n; i++)
	{
		if((a*i + b*(n-i)) == w)
		{
			result++;
			ans = i;
		}
	}
	if(result == 1)
	{
		printf("%d %d",ans,n-ans);
	}
	else
	{
		printf("-1");
	}
}
			
	