#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%.0f %.0f\n",n-(int)n*0.22,n-(int)(n * 0.2) * 0.22);
}
	