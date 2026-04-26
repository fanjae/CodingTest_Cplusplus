#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
       int a,b,gcd=1;
     	 for(int j=scanf("%d %d",&a,&b);j<=(a>=b?b:a);j++)
    	 {
    	    if(b%j==0&&a%j==0)
    	  	 {
    		    gcd = j;
  			 }
       }
       printf("%d %d\n",a*b/gcd,gcd);
    }
    
}