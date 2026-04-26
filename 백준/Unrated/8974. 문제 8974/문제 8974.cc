#include <stdio.h>
int main(void)
{
	int sum=0;
	int data[1005];
	int count=1;
	int count2=1;
	for(int i=1; i<=1005; i++)
	{
		data[i] = count2;
		if(count2 == count)
		{
			count2++;
			count=0;
		}
		count++;
	}
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=(a>b?b:a);i<=(a>b?a:b);i++)
	{
		sum += data[i];
	}
	printf("%d\n",sum);
}