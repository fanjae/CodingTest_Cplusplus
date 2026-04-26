#include <stdio.h>
int main(void)
{
	int tab[105]={0};
	int index[105]={0};
	int ele[105]={0};
	int n,n2;
	int cnt=0;
	scanf("%d %d",&n,&n2);
	for(int i=1; i<=n2; i++)
	{
		scanf("%d",&ele[i]);
		index[ele[i]] = 1;
	}
	for(int i=1; i<=n2; i++)
	{
		int flag = 0;
		for(int j=1; j<=n; j++)
		{
			if(tab[j] == 0 || tab[j] == ele[i])
			{
				tab[j] = ele[i];
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			int temp[105]={0};
			int max2 = 0;
			int index2;
			for(int j=1; j<=n; j++)
			{
				temp[j] = tab[j];
			}
			for(int j=1; j<=n; j++)
			{
				int flag2 = 0;
				for(int k=i; k<=n2; k++)
				{
					if(temp[j] == ele[k])
					{
						temp[j] = k;
						flag2 = 1;
						break;
					}
				}
				if(flag2 == 0)
				{
					temp[j] = n2+1;		
				}
			}
			for(int j=1; j<=n; j++)
			{
				if(max2 < temp[j])
				{
					max2 = temp[j];
					index2 = j;
				}
			}
			tab[index2] = ele[i];
			cnt++;
		}	
	}
	printf("%d\n",cnt);
}