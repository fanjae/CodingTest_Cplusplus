#include <stdio.h>
int main()
{
	int su=0;
	unsigned long long int n;
	int data[205];
	scanf("%llu",&n);
	while(n != 0)
	{
		data[su++] = n % 2;
		n /= 2;
	}
	for(int i=su-1; i>=0; i--)
	{
		printf("%d",data[i]);
	}
}