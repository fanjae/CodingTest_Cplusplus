#include <stdio.h>
#include <math.h>
int main(void)
{
	double n;
	double ans,ans2;
	scanf("%lf",&n);
	ans = M_PI * n * n;
	ans2 = n * n * 2;
	printf("%.6f\n",ans);
	printf("%.6f\n",ans2);
}