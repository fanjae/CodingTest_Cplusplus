#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int data[1005];
		int su;
		int cnt=0;
		int sum=0;
		double avg;
		scanf("%d",&su);
		for(int i=0; i<su; i++)
		{
			scanf("%d",&data[i]);
			sum += data[i];
		}
		avg = sum / su;
		for(int i = 0; i < su; i++)
		{
			if(data[i] > (int)avg)
			{
				cnt++;
			}
		}
		printf("%.3lf%%\n",(cnt/(double)su)*100);
	}
}
		