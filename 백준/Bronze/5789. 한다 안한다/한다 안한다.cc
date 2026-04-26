#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char data[1005];
		scanf("%s",data);
		printf("%s",data[strlen(data)/2-1] == data[strlen(data)/2] ? "Do-it\n" : "Do-it-Not\n");
	}
}