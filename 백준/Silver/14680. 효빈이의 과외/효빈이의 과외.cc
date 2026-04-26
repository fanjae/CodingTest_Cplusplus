#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int n,n_r,n_c;
long long int a[51][51], b[51][51],d[51][51], now;

int main() 
{
	scanf("%lld %lld %lld", &n,&n_r,&n_c);
	for(int i = 0; i < n_r; i++)
		for(int j = 0; j < n_c; j++)
			scanf("%lld", &a[i][j]);
	n--;
	while(n--){
		long long int r, c;
		scanf("%lld %lld", &r, &c);
		if(n_c != r)	
		{
			printf("-1");
			return 0;
		}
		for(int i = 0; i < n_r; i++)
		{
			for(int j = 0; j < n_c; j++)
			{
				b[i][j] = a[i][j];
			}
		}
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				scanf("%lld", &d[i][j]);
			}
		}
		for(int i = 0; i < n_r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				a[i][j] = 0;
				for(int k = 0; k < n_c; k++)
				{
					a[i][j] += (b[i][k] * d[k][j]) % mod;
				}
				a[i][j] %= mod;
			}
		}
		n_c = c;
	}
	long long int ans = 0;
	for(int i = 0; i < n_r; i++)
	{
		for(int j = 0; j < n_c; j++)
		{
			ans = (ans + a[i][j]) % mod;
			
		}
	}
	printf("%lld\n", ans);
	return 0;
}