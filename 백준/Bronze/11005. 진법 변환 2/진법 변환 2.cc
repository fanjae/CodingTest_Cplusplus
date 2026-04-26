#include <stdio.h>
int main()
{
	int n,b;
	int data[1005];
	int su=0;
	scanf("%d %d",&n,&b);
	while(n != 0)
	{
		data[su++] = n % b;
		n /= b;
	}
	for(int i=su-1; i>=0; i--)
	{
		if(data[i] >= 10)
		{
			printf("%c",65+(data[i]-10));
		}
		else
		{
			printf("%d",data[i]);
		}
	}
}