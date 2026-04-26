#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <algorithm>
int n,m;
int arr[10];
int data[10];
bool visited[10005];

using namespace std;
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
	for(int i=0; i<n; i++)
	{
		if(visited[data[i]] == false)
		{
			arr[k] = data[i];
			if(visited[data[i]] == false && (k != 0 && arr[k-1] <= arr[k]) || (k == 0))
			{
				visited[data[i]] = true;
				back(k+1);
				visited[data[i]] = false;
			}
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	back(0);
}