#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int max;
	int data[3];
	char a[5];
	for(int i=0; i<3; i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("%s",a);
	max = strlen(a);
	sort(data,data+3);
	for(int i=0; i<max; i++)
	{
		if(a[i] == 'A')
		{
			printf("%d ",data[0]);
		}
		else if(a[i] == 'B')
		{
			printf("%d ",data[1]);
		}
		else if(a[i] == 'C')
		{
			printf("%d ",data[2]);
		}
	}
}