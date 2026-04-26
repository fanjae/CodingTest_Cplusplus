#include <stdio.h>
int main()
{
	int count[10005]={0};
	int n;
	int index;
	int data;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data);
		count[data+100]++;
	}
	scanf("%d",&index);
	printf("%d\n",count[index+100]);
}