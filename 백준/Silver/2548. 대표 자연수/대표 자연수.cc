#include<cstdio>
#include<algorithm>
int main()
{
    int x[20001],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
	 {
	     scanf("%d",&x[i]);
    }
    std::sort(x,x+n);
    if(n % 2 == 1)
    {
    	 printf("%d\n",x[n/2]);
    }
    else
    {
    	printf("%d\n",x[n/2-1]);
    }
    return 0;
}