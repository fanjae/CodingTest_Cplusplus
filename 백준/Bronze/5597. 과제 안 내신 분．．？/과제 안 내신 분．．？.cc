#include <stdio.h>
int main()
{
	int n;
	int data[30]={0};
	for(int i=0; i<28; i++)
	{
		scanf("%d",&n);
		data[n-1]++;
	}
	for(int i=0; i<30; i++)
	{
		if(data[i] == 0)
		{
			printf("%d\n",i+1);
		}
	}
}