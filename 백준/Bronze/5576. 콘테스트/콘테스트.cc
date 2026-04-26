#include <stdio.h>
#include <algorithm>
using namespace std;
int cmp(int a, int b)
{
	if(a > b)
	{
		return a;
	}
}
int main()
{
	int data[10];
	int data2[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<10; i++)
	{
		scanf("%d",&data2[i]);
	}
	sort(data,data+10);
	sort(data2,data2+10);
	printf("%d %d\n",data[9]+data[8]+data[7],data2[9]+data2[8]+data2[7]);
}