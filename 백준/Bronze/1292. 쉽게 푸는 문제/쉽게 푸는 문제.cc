#include <stdio.h>
int main(void)
{
	int data[1005];
	int j=1;
	int sum=0;
	int count=0;
	int a,b;
	int temp;
	scanf("%d %d",&a,&b);
	if(a > b)
	{
		temp = a;
	   a = b;
	   b = temp;
	}
	for(int i=0; i<1005; i++)
	{
		data[i] = j;
		count++;
		if(j == count)
		{
		   j++;
			count=0;
		}
	}
	for(int i=a-1;i<=b-1;i++)
	{
		sum += data[i];
	}
	printf("%d\n",sum);
}