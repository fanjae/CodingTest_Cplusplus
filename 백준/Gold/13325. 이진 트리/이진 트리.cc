#include <stdio.h>
#include <algorithm>
using namespace std;
#define INF 987654321

int n;
int a[(1<<21)+1];

int leftPosisiton(int pos)
{
	return 2*pos+1; 
}
int rightPosition(int pos)
{ 
	return leftPosisiton(pos)+1; 
}
int f(int pos)
{
	
    int l = leftPosisiton(pos), r = rightPosition(pos);
    // is leaf
    if(l > n || r > n)
	{
		return a[pos];
	}
    
    int l_sum,r_sum;
    l_sum = f(l);
    r_sum = f(r);
    
    if(l_sum < r_sum)
	{
        a[l] += r_sum - l_sum;
    }
    else if(l_sum > r_sum)
	{
        a[r] += l_sum - r_sum;
    }
    
    return a[pos] + max(l_sum, r_sum);
}

int main()
{
    int k,ans=0;
    scanf("%d", &k);
    n = (1<<(k+1))-1-1;
    for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
    f(0);
    for(int i=1; i<=n; i++)
	{
		 ans += a[i];
	}
    printf("%d", ans);
    return 0;
}