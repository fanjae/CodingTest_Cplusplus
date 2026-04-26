#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
	return a>b;
}
int main(void)
{
	int T;
	int count=1;
	scanf("%d",&T);
	while(T--)
	{
		int data[3];
		scanf("%d %d %d",&data[0],&data[1],&data[2]);
		sort(data,data+3,compare);
		printf("Scenario #%d:\n",count++);
		if(data[0]*data[0] == data[1]*data[1]+data[2]*data[2])
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		printf("\n");
	}
}