#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	long long int sum = 0;
	char color[10][15] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	char data[3][10];
	for(int i=0; i<3; i++)
	{
		scanf("%s",data[i]);
	}
	for(int i=0; i<10; i++)
	{
		if(strcmp(data[0],color[i]) == 0)
		{
			sum += i * 10;
		}
	}
	for(int i=0; i<10; i++)
	{
		if(strcmp(data[1],color[i]) == 0)
		{
			sum += i;
		}
	}
	for(int i=0; i<10; i++)
	{
		if(strcmp(data[2],color[i]) == 0)
		{
			sum *= (long long int) pow(10,i);
		}
	}
	printf("%lld\n",sum);
}