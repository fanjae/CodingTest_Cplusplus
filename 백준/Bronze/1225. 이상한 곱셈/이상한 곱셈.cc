#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
long long sum,count;
int main()  
{  
    char a[10005],b[10005];  
    int c[10005],d[10005],i,j;  
    scanf("%s %s",a,b);  
    for(i=0;b[i];i++)
    {
    	count += b[i] - '0';
    }
    for(i=0;a[i];i++)
    {
    	sum += (a[i]-'0') * count;
    }
    printf("%lld",sum);
}  