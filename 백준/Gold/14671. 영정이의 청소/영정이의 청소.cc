#include <stdio.h>
int main(void)
{
	int set[2][2];
	int n,m,k;
	int ans=1;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0; i<k; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		x--;
		y--;
		set[x & 1][y & 1] = 1;
	}
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			ans &= set[i][j];
		}
	}
	if(ans)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}	
}	