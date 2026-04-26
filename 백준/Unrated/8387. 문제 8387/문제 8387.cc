#include <stdio.h>
int main(void)
{
	int n;
	int cnt = 0;
	char data[100005];
	char data2[100005];
	scanf("%d",&n);
	scanf("%s",data);
	scanf("%s",data2);
	
	for(int i=0; i<n; i++)
	{
		if(data[i] != data2[i])
		{
			cnt++;
		}
	}
	printf("%d\n",n-cnt);
}
	