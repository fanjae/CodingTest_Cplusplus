#include <stdio.h>
int main(void)
{
	int n,m;
	int t,sum;
	int arr[305][305]={0};
	int i,j,k;
	int x1,x2,y1,y2;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum = 0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(j=x1-1;j<=x2-1;j++)
		{
			for(k=y1-1;k<=y2-1;k++)
			{
				sum += arr[j][k];
			}
		}
		printf("%d\n",sum);
	}
}