#include <stdio.h>
#include <string.h>
#include <math.h>
int n,m;
int count;
int arr[1004005]={0};
int data[1004005]={0};
int is_palin(int value)
{
	int len;
	char input[105];
	sprintf(input,"%d",value);
	len = strlen(input);
	
	int count = 0;
	for(int i=0; i<len; i++)
	{
		if(input[i] == input[len-i-1])
		{
			count++;
		}
	}
	if(count == len)
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}
void eratos(int m)
{
	for(int i=2; i<=m; i++)
	{
		arr[i] = 1;
	}
	for(int i=2; i<=sqrt(m); i++)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(int j=i+i; j<=m; j+=i)
		{
			arr[j] = 0;
		}
	}
	for(int i=1; i<=m; i++)
	{
		if(arr[i] == 1)
		{
			data[count++]= i;
		}
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	eratos(1004000);
	
	for(int i=0; i<count; i++)
	{
		if(data[i] >= n && is_palin(data[i]) == 1)
		{
			printf("%d",data[i]);
			return 0;
		}
	}
}
