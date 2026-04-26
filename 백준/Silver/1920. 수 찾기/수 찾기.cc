#include <stdio.h>
#include <algorithm>
using namespace std;
  
bool binarysearch(int *a, int key, int sz)
{
    int l=0,r=sz-1, mid;
    while( l <= r )
	 {
        mid = (l+r)/2;
        if(a[mid]>key)
		  {
		  	  r = mid - 1;
        }
		  else if(a[mid]<key)
		  {
		     l = mid + 1;
        }
		  else if(a[mid]==key)
		  {
  	        return 1;
  	     }
    }
    return 0;
}
  
int main(){
        int i,n,m,k,arr[1000005];
        scanf("%d", &n);
        for(i=0;i<n;i++)
		  {
		  	   scanf("%d", &arr[i]);
	     }
		  std::sort(arr,arr+n);
        scanf("%d", &m);
        for(i=0;i<m;i++)
		  {
            scanf("%d",&k);
            printf("%d\n",binarysearch(arr,k,n));
        }
    return 0;
}