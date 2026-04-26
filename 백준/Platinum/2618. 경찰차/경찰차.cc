#include <stdio.h>
int n,w;
int p[1010][5];
int m[1010][1010];
int abs(int a)
{
	return a > 0 ? a : -a;
}
int min(int a,int b)
{
	return a > b? b : a;
}
int d(int a, int b)
{
	return abs(p[a][0]-p[b][0]) + abs(p[a][1]-p[b][1]);
}

int f(int a, int b)
{
	int n = (a > b ? a + 1 : b + 1);
   if(a == w + 1 || b == w + 1)
   {
   	return 0;
   }
   if(!m[a][b])
   {
   	m[a][b] = 2147483647;
   	m[a][b] = min(m[a][b],f(n,b) + d(a,n));
   	m[a][b] = min(m[a][b],f(a,n) + d(b,n));
   }
   return m[a][b];
}
int main()
{
	int i,a,b;
	scanf("%d %d",&n,&w);
	p[0][0]=p[0][1] = 1;
	p[1][0]=p[1][1] = n;
	
	for(i=2; i<=w+1; i++)
	{
		scanf("%d %d",&p[i][0],&p[i][1]);
	}
	printf("%d\n",f(0,1));
	
	a=0, b=1;
	for(i=2; i<=w+1; i++)
	{
		int n =(a > b ? a : b) + 1;
		if(m[n][b]+d(a,n) > m[a][n]+d(b,n))
		{
		    puts("2"), b = n;
		}
		else
		{
			puts("1"), a = n;
		}
	}
		printf("\n");
	   return 0;
}