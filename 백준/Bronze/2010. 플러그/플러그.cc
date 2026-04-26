#include <stdio.h>
int main(void)
{
    int i,j,k,n;
    int l,su;
    int sum[20]={0};
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
        scanf("%d",&su);
        sum[0] += su-1;
	}
    printf("%d\n",sum[i]+1);
}