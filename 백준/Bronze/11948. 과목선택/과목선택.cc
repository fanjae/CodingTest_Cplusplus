#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int science[4];
	int society[2];
	for(int i=0; i<4; i++)
	{
		scanf("%d",&science[i]);
	}
	for(int i=0 ;i<2; i++)
	{
		scanf("%d",&society[i]);
	}
	sort(science,science+4);
	sort(society,society+2);
	printf("%d\n",science[1]+science[2]+science[3]+society[1]);
}
