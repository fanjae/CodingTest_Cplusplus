#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int point,sum=0;
		float score,sum2=0,GPA=0;
		while(N--)
		{
			scanf("%d %f",&point,&score);
			sum += point;
			sum2 += score * point;
		}
		GPA = sum2 / sum;
		printf("%d %.1f\n",sum,GPA);
	}
}