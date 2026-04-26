#include <stdio.h>
int main(void)
{
	int i,j,count=0;
	int a[8][8]={0};
	char b[10][10];
	for(i=0;i<8;i++)
	{
       scanf("%s",&b[i]);
   }
   for(i=0;i<8;i++)
   {
   	for(j=0;j<8;j++)
   	{
   		a[i][j]=(i+j)%2;
   	}
   }
   for(i=0;i<8;i++)
   {
   	for(j=0;j<8;j++)
   	{
          if(b[i][j]=='F')
          {
          	 if(a[i][j]==0)
          	 {
          	 	count++;
          	 }
          }
   	}
   }
	printf("%d",count);  
}