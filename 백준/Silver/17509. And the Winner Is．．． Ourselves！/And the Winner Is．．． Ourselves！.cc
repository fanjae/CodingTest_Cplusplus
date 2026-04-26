#include <stdio.h>
#include <algorithm>

using namespace std;
typedef struct data
{
	int d;
	int t;
}data;

bool compare(struct data dat1, struct data dat2)
{
	return dat1.d < dat2.d;
}

int main(void)
{
	int ans = 0;
	struct data value[20];
	int sum[20]={0};
	for(int i=0; i<11; i++)
	{
		scanf("%d %d",&value[i].d,&value[i].t);
	}
	sort(value,value+11,compare);
	
	sum[0] = value[0].d;
	for(int i=1; i<11; i++)
	{
		sum[i] = sum[i-1] + value[i].d;	
	}
	
	for(int i=0; i<11; i++)
	{
		ans += sum[i] + (value[i].t * 20);
	}
	printf("%d\n",ans);
}