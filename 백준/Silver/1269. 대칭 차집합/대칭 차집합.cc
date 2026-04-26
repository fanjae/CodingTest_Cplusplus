#include <stdio.h>
#include <algorithm>
using namespace std;
int A[200005];
int B[200005];
int main(void)
{
	int count = 0;
	int n,m;
	int x = 0,y = 0;
	int min;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d",&B[i]);
	}
	sort(A,A+n);
	sort(B,B+m);
	
	while(x < n && y < m)
	{
		if(A[x] == B[y])
		{
			x++;
			y++;
			count++;
		}
		else if(A[x] < B[y])
		{
			x++;
		}
		else if(A[x] > B[y])
		{
			y++;
		}
	}
	printf("%d\n",n+m-2*count);
}