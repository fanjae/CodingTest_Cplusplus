#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[30];
	int i;
	int su1,su2,su3;
	int count[10]={0};
	scanf("%d %d %d",&su1,&su2,&su3);
	sprintf(a,"%d",su1*su2*su3);
	for(i=0;i<strlen(a);i++)
	{
		count[a[i]-'0']++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",count[i]);
	}
}