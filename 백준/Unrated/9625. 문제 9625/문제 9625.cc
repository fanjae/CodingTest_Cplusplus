#include <stdio.h>
int main(void)
{
	int k;
	int data[45][2]={{0,1},{1,1}};
	scanf("%d",&k);
	for(int i=2; i<k; i++)
	{
		data[i][0] = data[i-1][0] + data[i-2][0];
		data[i][1] = data[i-1][1] + data[i-2][1];
	}
	printf("%d %d\n",data[k-1][0],data[k-1][1]);
}