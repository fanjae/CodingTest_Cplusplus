#include <stdio.h>
#include <stdbool.h>
int n,m;
int arr[10];
bool visited[10];

void back(int k)
{
	if(k == m)
	{
		for(int i=0; i<m; i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		return ;
	}
	
	for(int i=1; i<=n; i++)
	{
		arr[k] = i;
		if(k > 0 && arr[k-1] <= arr[k])
		{
			back(k+1);	
		}
		else if(k == 0)
		{
			back(k+1);
		}

	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	back(0);
}