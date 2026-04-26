#include <stdio.h>
#include <limits.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		int data[1005][3]={0};
		double len;
		scanf("%d %d",&n,&m);
		for(int i=0; i<m; i++)
		{
			int a,b,p,q;
			scanf("%d %d %d %d",&a,&b,&p,&q);
			data[a-1][0] += p;
			data[a-1][1] += q;
			data[b-1][0] += q;
			data[b-1][1] += p;
		}
		double max = INT_MIN;
		double min = INT_MAX;
		for(int i=0; i<n; i++)
		{
			if(data[i][0] == 0 && data[i][1] == 0)
			{
				len = 0;
			}
			else
			{
				len = (double) (data[i][0]*data[i][0]) / ((double) (data[i][0]*data[i][0])+(double)(data[i][1]*data[i][1]));
			}
			if(len > max)
			{
				max = len;
			}
			if(len < min)
			{
				min = len;
			}
		}
		max = max * 1000;
		min = min * 1000;
		int n_max = (int) max;
		int n_min = (int) min;
		printf("%d\n",n_max);
		printf("%d\n",n_min);
	}
}