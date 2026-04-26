#include <stdio.h>
int main(void)
{
	int type;
	int data[5];
	int ans = 0;
	scanf("%d",&type);
	for(int i=0; i<5; i++)
	{
		scanf("%d",&data[i]);
		if(data[i] == type)
		{
			ans++;
		}
	}
	printf("%d\n",ans);
}