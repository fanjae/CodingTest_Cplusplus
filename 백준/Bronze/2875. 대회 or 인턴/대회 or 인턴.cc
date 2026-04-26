#include <stdio.h>
int main(void)
{
	int ans = 0;
	int team_count = 0;
	int n,m,k;
	
	scanf("%d %d %d",&n,&m,&k);
	
	while(n >= 2 && m >= 1)
	{
		n -= 2;
		m -= 1;
		team_count++;
	}
	
	k -= n + m;
	while(k > 0)
	{
		team_count--;
		k -= 3;
	}
	printf("%d\n",team_count);
}
		