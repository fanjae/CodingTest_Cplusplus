#include <stdio.h>
int main()
{
	long long int cnt=0;
	long long int S;
	long long int sum=0;
	scanf("%lld",&S);
	for(int i=1; ; i++)
	{
		sum += i;
		cnt++;
		if(sum > S)
		{
			cnt--;
			break;
		}
	}
	printf("%lld",cnt);
}