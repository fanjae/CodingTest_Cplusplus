#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int temp;
	int l;
	int cnt=1;
	int data[1005];
	scanf("%d %d",&n,&l);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	temp = data[0];
	for(int i=0; i<n; i++)
	{
		if(data[i] - temp >= l)
		{
			temp = data[i];
			cnt++;		
		}
	}
	printf("%d\n",cnt);
}