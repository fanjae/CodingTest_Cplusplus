#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int T=1;
	int L=1,P=1,V=1;
	while(1)
	{
		scanf("%d %d %d",&L,&P,&V);
		if(L == 0 && P == 0 && V == 0)
		{
			break;
		}
		else
		{
			printf("Case %d: %d\n",T++,L*(V/P)+min((V%P),L));
		}
	}
}