#include <stdio.h>
#include <math.h>
int main()
{
	int find = 0;
	long long int n;
	scanf("%lld",&n);
	for(int i=0; i<=30; i++)
	{
		if(pow(2,i) == n)
		{
			printf("1\n");
			return 0;
		}
	}
	printf("0\n");
}