#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[5];
		for(int i=0; i<5; i++)
		{
			scanf("%d",&data[i]);
		}
		sort(data,data+5);
		if(data[4] - data[0] > 5)
		{
			printf("KIN\n");
		}
		else
		{
			printf("%d\n",data[1]+data[2]+data[3]);
		}
	}
}
	