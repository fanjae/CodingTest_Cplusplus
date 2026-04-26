#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int data[3];
	while(data[0] != 0 || data[1] != 0 || data[2] != 0)
	{
		scanf("%d %d %d",&data[0],&data[1],&data[2]);
		if(data[0] == 0 && data[1] == 0 && data[2] == 0)
		{
			break;
		}
		sort(data,data+3);
		if(data[0]*data[0] + data[1]*data[1] == data[2]*data[2])
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}
}