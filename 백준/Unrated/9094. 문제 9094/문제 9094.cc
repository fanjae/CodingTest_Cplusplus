#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b;
		int n,m;
		int cnt = 0;
		double value;
		scanf("%d %d",&n,&m);	
		for(int i=1; i<n; i++)
		{
			for(int j=1; j<n; j++)
			{
				if(i >= j)
				{
					continue;
				}
				int temp_a = i * i;
				int temp_b = j * j;
				
				value = (double) (temp_a + temp_b + m) / (i * j);
				if((value - (int)value) == 0)
				{
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
	}	
}