#include <stdio.h>
int main(void)
{
	int data[15];
	int n;
	int a=0,b=1,c=2,d=3,e=4,f=5;
	while(1) {
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		for(int i=0; i<n; i++)
		{
			scanf("%d",&data[i]);
		}
		for(a = 0; a<b; a++)
		{
			for(b = a+1; b<c; b++)
			{
				for(c = b+1; c<d; c++)
				{
					for(d = c+1; d <e; d++)
					{
						for(e = d+1; e < f; e++)
						{
							for(f = e+1; f < n; f++)
							{
								printf("%d %d %d %d %d %d\n",data[a],data[b],data[c],data[d],data[e],data[f]);
							}
						}
					}
				}
			}
		}
		printf("\n");
	}
}