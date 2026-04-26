#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
bool compare(const int &a, const int &b)
{
	return (a%10) > (b%10);
}
int main()
{
	int N;
	int index=0;
	int data[105]={0};
	scanf("%d",&N);
	while(N > 0)
	{
		data[index++] = N - (N / 10) * 10;
		N /= 10;
	}
	sort(data,data+index,compare);
	for(int i=0; i<index; i++)
	{
		printf("%d",data[i]);
	}
}
		