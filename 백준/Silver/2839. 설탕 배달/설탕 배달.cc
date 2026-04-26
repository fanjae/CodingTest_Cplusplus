#include <stdio.h>      
int coin[3]={0,3,5};
int data[50005]={0},money,n;     
int main()      
{
    scanf("%d",&money);
    
    for(int i=1;i<=money;i++)
	{      
    	data[i]=100000000;      
  	}
    for(int i=1;i<=2;i++)
	{      
    	data[coin[i]]=1;      
    }
    for(int i=1;i<=money;i++)      
    {
		for(int j=1;j<=2;j++)      
        {      
        	if(data[i+coin[j]] > (data[i] + data[coin[j]]))
			{      
        		data[i+coin[j]] = data[i] + data[coin[j]];
			}
       	}
    }
    if(data[money] == 100000000)
    {         
       printf("-1");
    }
    else
    {
         printf("%d",data[money]);
    }
}