#include <stdio.h>

int n;
int num[110];
int s[110];

int main()
{
   scanf("%d",&n);
	
	int i,j;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i-1;j>=i-num[i];j--)
	   {
		    s[j+1]=s[j];
	   }
		s[i-num[i]]=i;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",s[i]);
	}
}