#include <stdio.h>
int main()
{
	int ch[9]={0};
	int sum=0;
	int k=0;
	
	for(int i=0; i<9; i++)
	{
		scanf("%d",&ch[i]);
		sum+=ch[i];
	}
	for(int i=0; i<8; i++)
	{
		for(int j=i+1; j<9; j++)
		{
			if(sum-(ch[i]+ch[j])==100)
			{
				ch[i] = -1;
				ch[j] = -1;
			}
		}
	}
	for(int i=0; i<9; i++)
	{
		for(int j=1; j<9; j++)
		{
			if(ch[j-1]>ch[j])
			{
				int temp = ch[j-1];
				ch[j-1] = ch[j];
				ch[j] = temp;
			}
		}
	}
	for(int i=0; i<9; i++)
	{
		if(ch[i] == -1) continue;
		printf("%d\n",ch[i]);
	}
	return 0;
}