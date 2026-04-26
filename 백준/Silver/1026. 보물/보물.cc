#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
	return a>b;
}
int main(void)
{
	 int n;
    int a[60];
    int b[60];
    int sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
    	scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
    	scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n,compare);
    for(int i=0;i<n;i++)
    {
    	sum += a[i]*b[i];
    }
    printf("%d",sum);
}