#include <stdio.h> 
#include <stdlib.h> 
int mod=0; 
int GCD(int n1,int n2,int n3) 
{ 
    if((n2 % n1 == 0) && (n3 % n1 ==0)) 
    { 
        mod = n1; 
    } 
   
    if(n1==n2) 
    { 
        return mod; 
    } 
    GCD(n1+1,n2,n3); 
} 
int main() 
{
	int t;
	scanf("%d",&t);
	int i;
    int a,b,gcd;
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&a,&b); 
       
		if(a>=b) 
		{ 
			gcd = GCD(1,b,a); 
		} 
		else 
		{ 
			gcd = GCD(1,a,b); 
		}
		printf("%d\n",gcd*(a/gcd)*(b/gcd));
	}
}