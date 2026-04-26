#include <stdio.h>
int main(void)
{
	int score=100,score2=100;
	int i,n;
	int a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a > b)
		{
			score2 -= a;
		}
		else if(a < b)
		{
			score -= b;
		}
	}
	printf("%d\n%d",score,score2);
}