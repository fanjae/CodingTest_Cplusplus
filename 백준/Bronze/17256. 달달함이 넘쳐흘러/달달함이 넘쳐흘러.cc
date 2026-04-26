#include <stdio.h>
int main(void)
{
	int a[3];
	int b[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	scanf("%d %d %d",&b[0],&b[1],&b[2]);
	printf("%d %d %d\n",b[0]-a[2],b[1]/a[1],b[2]-a[0]);
}