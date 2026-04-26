#include <stdio.h>  
#include <stdlib.h>  
int main(void)  
{  
	 double s[10005]={0.0};  
    int i,a,b,n;
    double max=-5000000.0,sum=1.0;
    scanf("%d",&n);  
      
    for(i=0;i<n;i++)
    {
      scanf("%lf",&s[i]);  
    }
    if(n == 1)
    {
      sum = sum * s[0];
      max = sum;
    }
    else
    {
       for(a=n-2,sum=s[n-1]; a>=0; a--)  
       {  
         sum = sum*s[a]>s[a]? sum*s[a]:s[a];  
         if(max < sum)
			{
			   max = sum;
			}
       }
    }
    printf("%.3f\n",max);
	 return 0;
}