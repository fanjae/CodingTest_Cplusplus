#include <stdio.h>      
int coin[10]={0,1,5,10,50,100,500};
int data[10005]={0},money,n;     
int main()      
{
	int value;
    scanf("%d",&money);
    
    value = 1000-money;
    for(int i=1;i<=value;i++)
	{      
    	data[i]=100000000;      
  	}
    for(int i=1;i<=6;i++)
	{      
    	data[coin[i]]=1;      
    }
    for(int i=1;i<=value;i++)      
    {
		for(int j=1;j<=6;j++)      
        {      
        	if(data[i+coin[j]] > (data[i] + data[coin[j]]))
			{      
        		data[i+coin[j]] = data[i] + data[coin[j]];
			}
       	}
    }
    if(data[value] == 100000000)
    {         
       printf("-1");
    }
    else
    {
         printf("%d",data[value]);
    }
}