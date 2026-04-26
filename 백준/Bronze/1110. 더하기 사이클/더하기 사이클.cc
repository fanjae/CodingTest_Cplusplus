#include <stdio.h>
int main()
{
	int n;
	int result;
	int result2=-5;
	int len=0;
	scanf("%d",&n);
	result = n;
	while(n != result2)
	{
		int m;
		m = (result / 10) + (result % 10);
		result = ((result % 10) * 10) + (m % 10);
		result2 = result;
		len++;
	}
	printf("%d\n",len);
}