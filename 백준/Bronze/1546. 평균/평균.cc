#include <stdio.h>
int main()
{
	double avg=0.0;
	double sum=0.0;
	double data[1005];
	int n;
	double max=0.0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf",&data[i]);
		if(max < data[i])
		{
			max = data[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		avg = avg + (double) data[i] / max * 100;
	}
	printf("%lf\n",avg/n);
}