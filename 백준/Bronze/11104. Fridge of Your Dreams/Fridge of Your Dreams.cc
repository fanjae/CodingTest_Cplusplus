#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char name[1005];
		long long int sum=0;
		long long int a=1;
		scanf("%s",name);
		for(int i=strlen(name)-1; i>=0; i--)
		{
			if(name[i] == '1')
			{
				sum = sum + a;
			}
		   a*=2;
		}
		printf("%lld\n",sum);
	}
}