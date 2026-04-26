#include <stdio.h>
#include <algorithm>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[10];
		for(int i=0; i<10; i++)
		{
			scanf("%d",&data[i]);
		}
		std::sort(data,data+10);
		printf("%d\n",data[7]);
	}
}