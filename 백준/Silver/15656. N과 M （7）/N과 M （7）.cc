#include <stdio.h>
int n,m;
int data[10];
void back(int count,int arr[])
{
	if(count > m)
	{
		return ;
	}
	if(count == m)
	{
		for(int i=1; i<=count; i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		return ;
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			arr[count+1] = data[i];
			back(count+1,arr);	
		}
	}
}
int main(void)
{
	int arr[10];
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			int temp;
			if(data[i] < data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}	
	for(int i=1; i<=n; i++)
	{
		arr[1] = data[i];
		back(1,arr);
	}
}