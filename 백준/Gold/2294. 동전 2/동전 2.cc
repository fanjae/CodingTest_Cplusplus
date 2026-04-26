#include <stdio.h>      
int coin[100]={0},data[10000005]={0},money,i,j,n;     
int main()      
{       
    scanf("%d",&n);      
    scanf("%d",&money);      
      
    for(i=1;i<=n;i++)      
    scanf("%d",&coin[i]);      
          
     for(i=1;i<=money;i++)      
     data[i]=100000000;      
      
     for(i=1;i<=n;i++)      
     data[coin[i]]=1;      
           
       for(i=1;i<=money;i++)      
       {      
         for(j=1;j<=n;j++)      
         {      
           if(data[i+coin[j]] > (data[i] + data[coin[j]]))      
           data[i+coin[j]] = data[i] + data[coin[j]];      
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