#include <stdio.h>
int main()
{
	int n;
	int m;
	int data[15005];
	int count=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(i != j && (data[i] + data[j]) == m)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);				
}