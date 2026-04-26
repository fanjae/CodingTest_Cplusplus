#include <stdio.h>
int data[505][505]={0};
int visitdata[505]={0};
int count=0;
int T;
int main(void)
{
    int i,j;
    int n,m,x,y;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
       scanf("%d %d",&x,&y);
       data[x][y] = 1;
    }
    for(i=2;i<=n;i++)
    {
    	if(data[1][i] || data[i][1])
    	{
    		for(j=1;j<=n;j++)
    		{
    			if(data[i][j] || data[j][i])
    			{
    				visitdata[i]=visitdata[j]=1;
    			}
    		}
    	}
    }
    for(i=2;i<=n;i++)
    {
    		count+=visitdata[i];
    }
   printf("%d",count);
}