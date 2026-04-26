#include <stdio.h>
int main()
{
    int n,m;
    int min,gcd;
    scanf("%d:%d",&n,&m);
    min = n >= m ? m : n;
    for(int i=min; i>=1; i--)
    {
    	if(n % i == 0 && m % i == 0)
    	{
    		gcd = i;
    		break;
    	}
    }
    printf("%d:%d\n",n/gcd,m/gcd);
}