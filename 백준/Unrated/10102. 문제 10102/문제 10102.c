#include <stdio.h>
int main(void)
{
	char a[18];
	int i,n;
	int count=0;
	int count2=0;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		if(a[i] == 'A')
		{
			count++;
		}
		else
		{
			count2++;
		}
	}
	if(count > count2)
	{
		printf("A");
	}
	else if(count == count2)
	{
		printf("Tie");
	}
	else
	{
		printf("B");
	}
}