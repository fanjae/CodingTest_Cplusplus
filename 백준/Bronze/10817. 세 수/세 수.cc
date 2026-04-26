#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int data[3];
	for(int i=0; i<3; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+3);
	printf("%d\n",data[1]);
}