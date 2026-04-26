#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	
	printf("%d",min(a+d,b+c));
}