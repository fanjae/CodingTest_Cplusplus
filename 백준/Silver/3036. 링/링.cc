#include <stdio.h>
int GCD(int a,int b)
{
	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
int main()
{
	int n;
	int dat[105]={0};
	scanf("%d",&n);	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&dat[i]);
	}
	int gcd;
	for(int i=1; i<n; i++)
	{
		gcd = GCD(dat[0],dat[i]);
		printf("%d/%d\n",dat[0]/gcd,dat[i]/gcd);
	}
	return 0;
}