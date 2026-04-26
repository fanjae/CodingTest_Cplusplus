#include <stdio.h>
int main(void)
{
	int n;
	int two=0;
	int e=0;
	char data[100005];
	scanf("%d",&n);
	scanf("%s",data);
	for(int i=0; i<n; i++)
	{
		if(data[i] == '2')
		{
			two++;
		}
		else if(data[i] == 'e')
		{
			e++;
		}
	}
	if(two == e)
	{
		printf("yee");
	}
	else if(two > e)
	{
		printf("2");
	}
	else
	{
		printf("e");
	}
}