#include <stdio.h>
#define MOD 14579
int main(void)
{
	int a,b;
	int sum = 1;
	int data[1005]={0};
	scanf("%d %d",&a,&b);
	for(int i=a; i<=b; i++)
	{
		data[i] = ((i * (i + 1)) / 2) % MOD;
		sum = (sum * data[i]) % MOD;
	}
	printf("%d\n",sum);
}