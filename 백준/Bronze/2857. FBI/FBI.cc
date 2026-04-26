#include <stdio.h>
#include <string.h>
int main(void)
{
	int count=0;
	int data[5]={0};
	char a[50];
	for(int i=0; i<5; i++)
	{
		scanf("%s",a);
		if(strstr(a,"FBI"))
		{
			data[i]=i+1;
			count++;
		}
	}
	for(int i=0; i<5; i++)
	{
		if(data[i])
		{
			printf("%d ",data[i]);
		}
	}
	if(count == 0)
	{
		printf("HE GOT AWAY!\n");
	}
}