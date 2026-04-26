#include <stdio.h>
int main(void)
{
	int n;
	char data[100005];
	scanf("%d",&n);
	getchar();
	scanf("%s",data);
	for(int i=n-5; i<n; i++)
	{
		printf("%c",data[i]);
	}
}