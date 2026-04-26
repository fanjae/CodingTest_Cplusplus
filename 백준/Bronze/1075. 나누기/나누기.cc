#include <stdio.h>
int main(void)
{
	int n,f;
	int value;
	scanf("%d",&n);
	scanf("%d",&f);
	
	value = n - (n % 100);
	for(int i=value; i<=value+99; i++)
	{
		if(i % f == 0)
		{
			printf("%02d",i % 100);
			break;
		}
		
	}
}
		