#include <stdio.h>
int main()
{
	int n,m;
	int data[105];
	scanf("%d %d",&n,&m);
   for(int i=0; i<n; i++)
   {
   	data[i] = i+1;
   }
   for(int i=0; i<m; i++)
   {
   	int x,y;
   	scanf("%d %d",&x,&y);
   	int temp = data[x-1];
   	data[x-1] = data[y-1];
   	data[y-1] = temp;
   }
   for(int i=0; i<n; i++)
   {
   	printf("%d ",data[i]);
   }
}